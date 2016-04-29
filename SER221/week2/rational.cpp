/******************************************************
 * Programmed by : Shinya Yamamoto
 * Created on    : 17 January 2016
 * Class         : SER221
 * Week          : 2nd week
 * Problem       :  Operator Overloading
 *
 * This program defines a class for raitonal number and 
 * overloads the input and output operators >> and
 * <<. ※ Overload all the following operators so that they
 * correctly apply to the type Rational: ==, <, <=, >, >=, 
 * +, -, *, and /. The main() should
 * test your class and the functions.
 ******************************************************/
//g++ -o rational.exe rational.cpp
#include <iostream>
#include <iomanip>
#include <string>
#include <cstring>
#include <cctype>
#include <cstdlib>
using namespace std; 

int gcd(int a, int b);

/** *************************************************************
 * class Rational 
 * -------------------------------------------------------------
 * Rational class has three member variables: numerator, denominator,
 * and number. They are all integer values. Also, this class has
 * some member functions and friend functions. 
 ***************************************************************/
class Rational {
    
public:
    int numerator;
    int denominator;
    int number;
    
    //initialize rational number
    void setNumbers(int value1, int value2);
    
    //initialize a whole number
    void wholeNumber(int integer);
    
    //normalize rational numbers
    Rational normalize(Rational rational);
    
    //initialize an object to 0.
    Rational();
    
    //Overload input and output
    friend ostream& operator << (ostream& outs, const Rational& rational);
    friend istream& operator >> (istream& ins, Rational& rational);
    
    //Overload calculation operator
    friend Rational operator + (const Rational rational1, const Rational rational2);
    friend Rational operator - (const Rational rational1, const Rational rational2);
    friend Rational operator * (const Rational rational1, const Rational rational2);
    friend Rational operator / (const Rational rational1, const Rational rational2);
    friend bool operator == (const Rational rational1, const Rational rational2);
    friend bool operator < (const Rational rational1, const Rational rational2);
    friend bool operator <= (const Rational rational1, const Rational rational2);
    friend bool operator > (const Rational rational1, const Rational rational2);
    friend bool operator >= (const Rational rational1, const Rational rational2);
    
};

int main() {
    
    int numerator;
    int denominator;
    Rational test0, test1, test2, test3, test4, test5;
    cout << "---------------------------- \n";
    cout << "Test for setNumbers function \n";
    cout << "Enter numerator ";
    cin >> numerator;
    cout << "Enter denominator ";
    cin >> denominator;
    test0.setNumbers(numerator, denominator);
    test0 = test0.normalize(test0);
    cout << test0 << endl;
    cout << "---------------------------- \n";
    cout << "Enter raitonal number (eg.4/3)" << endl;
    cin >> test1;
    test1 = test1.normalize(test1);
    cout << test1 << endl;
    cout << "---------------------------- \n";
    cout << "Test for overloading operators\n";
    cout << "Enter raitonal number"<< endl;
    cin >> test2;
    test2 = test2.normalize(test2);
    cout << test2 << endl;
    
    cout << test1 << " + " << test2 << " = ";
    test3 = test1 + test2;
    test3 = test3.normalize(test3);
    cout << test3 << endl;
    
    cout << test1 << " - " << test2 << " = ";
    test3 = test1 - test2;
    //test3 = test3.normalize(test3); issue when tes3 is negative
    cout << test3 << endl;
    
    cout << test1 << " x " << test2 << " = ";
    test3 = test1 * test2;
    test3 = test3.normalize(test3);
    cout << test3 << endl;
    
    cout << test1 << " / " << test2 << " = ";
    test3 = test1 / test2;
    test3 = test3.normalize(test3);
    cout << test3 << endl;
    
    cout << "---------------------------- \n";
    cout << "Test for overloading operators\n";
    test4.setNumbers(1, 2);
    test5.setNumbers(1, 2);
    if(test4 == test5)
        cout << "test4 is equal to test5\n";
        
    test4.setNumbers(3, 2);
    test5.setNumbers(1, 2);
    if(test4 > test5)
        cout << "test4 is greater than test5\n";
        
    test4.setNumbers(1, 2);
    test5.setNumbers(1, 2);
    if(test4 >= test5)
        cout << "test4 is greater than and equal to test5\n";
        
    test4.setNumbers(1, 3);
    test5.setNumbers(1, 2);
    if(test4 == test5)
        cout << "test4 less than test5\n";
        
    test4.setNumbers(1, 2);
    test5.setNumbers(1, 2);
    if(test4 == test5)
        cout << "test4 is less than and equal to test5\n";
    
    
    return 0;
}

/*************************************************************
 * Rational();
 *------------------------------------------------------------
 *This is a default constructor that initializes an object 
 *to 0 (that is, 0/1).
 *************************************************************/
Rational::Rational(){
    // blank here
}

/*************************************************************
 * void setNumbers(int numerator, int denominator);
 *------------------------------------------------------------
 * This funtion accepts two integers. One is a numerator, and
 * the other is denominator. By accepting them, the function
 * set up a rational number.
 *************************************************************/
void Rational::setNumbers(int value1, int value2){
    
    numerator = value1;
    
    //do not accept 0 as denominator
    if(value2 == 0 ) {
     
        cout <<"ERROR in setNumbers";
        exit(1);
    
    } else {
        
        denominator = value2;
        
    }

    
}

/*************************************************************
 * void wholeNumber(int integer);
 *------------------------------------------------------------
 * This function accepts an integer. The function sets up
 * a whole number. That is, the numerator is the integer and
 * denominator is 1.
 *************************************************************/
void Rational::wholeNumber(int integer){
    
    numerator = integer;
    denominator = 1;
}

/*************************************************************
 *  void Rational::normalize(Rational rational);
 *------------------------------------------------------------
 * This function accepts, reduces, and returns a rational number.
 * In this function gcd function is used as a helper funciton.
 *************************************************************/
 Rational Rational::normalize(Rational rational){
     
     Rational temp;
     
     int gcdnum = gcd(rational.numerator, rational.denominator);
     
     //cout << "GCD " << gcdnum << endl;
     
     temp.numerator = rational.numerator / gcdnum;
     temp.denominator = rational.denominator / gcdnum;
     
    //if denominator has minus sign
     if(temp.denominator < 0){
         temp.denominator = temp.denominator * (-1);
         temp.numerator = temp.numerator * (-1);
     }
     
     //cout << "numerator " << rational.numerator  << endl;
     //cout << "denominator " << rational.denominator  << endl;
     
     return temp;
 }
 
/*************************************************************
 * int gcd(int a, int b);
 *------------------------------------------------------------
 * This function returns the greatest common divisor
 *************************************************************/
int gcd(int a, int b) {
    
    if(a < 0) { a * (-1); }
    if(b < 0) { b * (-1); }
    
    while(a != b) {
        if (a < b) b -= a;
        else a-= b;
    }
    
    return a;
}

/*============================================================*/
// OVERLOARD OPERATORS <<
// Output the numerator and denominator with /
/*============================================================*/
 ostream& operator << (ostream& outs, const Rational& rational) {
    
    if(rational.denominator == 0){
        
        cout << "ERROR in <<";
        exit(1);

    } else if(rational.denominator == 1) {
        
        outs << rational.numerator;
    
    } else if(rational.numerator == 0) {
        
        outs << 0;
    
    } else {
    
        outs << rational.numerator << "/" << rational.denominator; 
    
    }
    
    return outs;
}
/*============================================================*/
// OVERLOARD OPERATORS >> 
// Firstly, I am going to find '/' from user input.
// Then, I get two strings before '/' and after '/'.
// One is set as a numerator, and the other is set as denominator.
/*============================================================*/
  istream& operator >> (istream& ins, Rational& rational) {
    
    const int MAX_SIZE = 20;
    int count = 0;
    char inputString[MAX_SIZE];
    
    
    cin >> inputString;
    
    //Find '/' in inputString
    while(inputString[count] != '/' && inputString != '\0')
        count ++;
    
    //When / is found, get numerator and denominator
    if(inputString[count] == '/') {
        
        
        char numeratorStr[count];
        char denominatorStr[strlen(inputString) - count];
        int index = 0;
        
        //get numetrator
        //cout << "numerator: \n";
        for(int i=0; i < count; i++){
            
            numeratorStr[i] = inputString[i];
            //cout << inputString[i] << endl;
            //cout << numeratorStr[i];
        }   
        
        cout << endl;
        
        //get denominator
        //cout << "denominator: \n";
        for(int j= count + 1; j < strlen(inputString); j++){
            
            //cout << inputString[j];
            
            denominatorStr[index] = inputString[j];
            
            //cout << denominatorStr[index];
            
            index++;
        
        } 
        
        
        
        //Check if I am getting correct string
        // for(int k = 0; k < strlen(inputString) - count; k ++){
        //     cout << denominatorStr[k];
        // }
        
        //convert string to int value
        rational.numerator = atoi(numeratorStr);
        rational.denominator = atoi(denominatorStr);
        
        //do not accept 0 as denominator
        if(rational.denominator == 0) {
            cout <<"ERROR in >>";
            exit(1);
        }
            
    
    } else {
         
         cout << "Invalid input";
         exit(1);
    }
 
    
    
    cout << endl;
 
    
    return ins;
}

/*============================================================*/
// OVERLOARD OPERATORS + 
// This function orverloards + operator.
// The function adds two rational numbers and return 
// a rational number object holding the result.
/*============================================================*/
 Rational operator + (const Rational rational1, const Rational rational2){
     
     Rational temp;
     
     temp.numerator = rational1.numerator * rational2.denominator +
                        rational1.denominator * rational2.numerator;
     temp.denominator = rational1.denominator * rational2.denominator;
     
     return temp;
     
 }
 
 /*============================================================*/
// OVERLOARD OPERATORS - 
// This function orverloards - operator.
// The function substitues two rational numbers and return 
// a rational number object holding the result.
/*============================================================*/
 Rational operator - (const Rational rational1, const Rational rational2){
     
     Rational temp;
     
     temp.numerator = rational1.numerator * rational2.denominator - 
                        rational1.denominator * rational2.numerator;
     temp.denominator = rational1.denominator * rational2.denominator;
     
     return temp;
 }
 
/*============================================================*/
// OVERLOARD OPERATORS * 
// This function orverloards * operator.
// The function multiplies two rational numbers and return 
// a rational number object holding the result.
/*============================================================*/
 Rational operator * (const Rational rational1, const Rational rational2){
     
     Rational temp;
     
     temp.numerator = rational1.numerator * rational2.numerator;
     temp.denominator = rational1.denominator * rational2.denominator;
     
     return temp;
     
 }
 
 /*============================================================*/
// OVERLOARD OPERATORS / 
// This function orverloards / operator.
// The function devides two rational numbers and return 
// a rational number object holding the result.
/*============================================================*/
 Rational operator / (const Rational rational1, const Rational rational2){
     
     Rational temp;
     
     temp.numerator = rational1.numerator * rational2.denominator;
     temp.denominator = rational1.denominator * rational2.numerator;
     
     return temp;
 }
 
/*============================================================*/
// OVERLOARD OPERATORS ==
// This function orverloards == operator.
/*============================================================*/
 bool operator == (const Rational rational1, const Rational rational2){
     
     bool equal = false;
     
     //Two rational numbers a/b and c/d are equal if a*d equals c*b.
     if(rational1.numerator * rational2.denominator
        == rational1.denominator * rational2.numerator ) {
         equal = true;
     }
     
     return equal;
 }
 
/*============================================================*/
// OVERLOARD OPERATORS >
// This function orverloards < operator.
// The function returns boolen value to determine rational number 1
// is greater than rational number 2.
/*============================================================*/
 bool operator > (const Rational rational1, const Rational rational2){
     
     bool greater = false;
     
     Rational temp;
     
     temp = rational1 - rational2;
     
     if(temp.numerator > 0){
         
         greater = true;
         
     }
     
     return greater;
     
 }
 
/*============================================================*/
// OVERLOARD OPERATORS >=
// This function orverloards <= operator.
// The function returns boolen value to determine rational number 1
// is greater than and equal to rational number 2.
/*============================================================*/
 bool operator >= (const Rational rational1, const Rational rational2){
     
     bool greaterEqual = false;
     
     Rational temp;
     
     temp = rational1 - rational2;
     
     if(temp.numerator >= 0){
         
         greaterEqual = true;
         
     }
     
     return greaterEqual;
     
 }
 

/*============================================================*/
// OVERLOARD OPERATORS <
// This function orverloards > operator.
// The function returns boolen value to determine rational number 1
// is less than rational number 2.
/*============================================================*/
 bool operator < (const Rational rational1, const Rational rational2){
     
     bool less = false;
     
     Rational temp;
     
     temp = rational1 - rational2;
     
     if(temp.numerator < 0){
         
         less = true;
         
     }
     
     return less;
     
 }
 
/*============================================================*/
// OVERLOARD OPERATORS <=
// This function orverloards <= operator.
// The function returns boolen value to determine rational number 1
// is less than and equal to rational number 2.
/*============================================================*/
 bool operator <= (const Rational rational1, const Rational rational2){
     
     bool lessEqual = false;
     
     Rational temp;
     
     temp = rational1 - rational2;
     
     if(temp.numerator <= 0){
         
         lessEqual = true;
         
     }
     
     return lessEqual;
     
 }

 