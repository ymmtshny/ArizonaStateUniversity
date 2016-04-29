/******************************************************
 * Programmed by : Shinya Yamamoto
 * Created on    : 11 January 2016
 * Class         : SER221
 * Week          : 1st week
 * Problem       : Madlib
 *
 * This program lets the user input the following data:
 * the first or last name of your Instructor,
 * your name, a food, a number between 100 and 120,
 * an adjective, a color, and an animal. After the user
 * inputs those data, this program writes a letter based
 * on input data.
 ******************************************************/
//g++ -o madlib.exe madlib.cpp
#include <stdio.h>
#include <iostream> 
#include <string> 
using namespace std; 

int main() {
    
    //Variables 
    string instracterName; 
    string yourName;
    string food;
    int number;
    string adjective;
    string color;
    string animal;
    
    // INPUT
    cout << "Enter your instracter's Name : ";
    cin >> instracterName;
    cout << "Enter Your Name : ";
    cin >> yourName;
    cout << "Enter a food : ";
    cin >> food;
    
    //INPUT VALIDATION 
    do {
        cout << "Enter a number between 100 and 120 : ";
        cin >> number; 
        
        if(number < 100 || number > 120)
            cout << "Your number should be between 100 and 120" << endl;
        
    }while(number < 100 || number > 120);
    
    cout << "Enter an adjective : ";
    cin >> adjective;
    cout << "Enter an color : ";
    cin >> color;
    cout << "Enter an animal : ";
    cin >> animal;
    
    //OUTPUT
    cout << "Dear Professor " << instracterName << "," << endl;
    cout << endl;
    cout << "I am sorry that I am unable to turn in my homework at this time." << endl;
    cout << "First, I ate a rotten " << food << ", which made me turn " << color << " and" << endl;
    cout << "extremely ill. I came down with a fever of " << number << "." << endl;
    cout << "Next, my " << adjective << " pet " << animal << "must have smelled the remains"<< endl;
    cout << "of the "<< food << " on my homework, because he ate it. I am currently"<< endl;
    cout << "rewriting my homework and hope you will accept it late."<< endl;
    cout << endl;
    cout << "Sincerely,"<< endl;
    cout << yourName << endl;
    
    return 0;
}
