/******************************************************
 * Programmed by : Shinya Yamamoto
 * Created on    : 17 January 2016
 * Class         : SER221
 * Week          : 2nd week
 * Problem       : Student Class
 *
 * This program asks the user to input a stdents data,
 * display the enterned data back in a well-formatted
 * way, and ask the user if he wants to enter the data
 * again. In this program, a calss named Student that
 * has three member variables( name, numClasses, and 
 * classList) must be created. 
 ******************************************************/
//g++ -o student.exe student.cpp
#include <iostream>
#include <iomanip>
#include <string> 
#include <cctype>
using namespace std; 

/** *************************************************************
 * class Student 
 * -------------------------------------------------------------
 * Student class has 3 variables; name, numClasses, and calssList.
 * name is a string value showing the student name.
 * numClaases is an integer showing the number of classes.
 * classList is a string array showing the list of class.
 * classList is a dincamic array, and its size is numClasses.
 ***************************************************************/
class Student {
    
public:

    string name;        //Student name      
    int numClasses;     //the number of classes
    string *classList;  //the list of classes
    
    //constructor
    //initialize Student with name, numClasses, classList
    Student(string name, int numClasses, string classList[]);
    
    //initialize Student with name, numClasses
    Student(string name, int numClasses);
    
    //initialize Student with name
    Student(string name);
    
    //initialize Student with ???
    Student();
    
    //mutator method (set)
    //This funciton asks the user to input the student information.
    void inputsStudentInfo();
    
    //accessor method (get)
    //This function outputs inforamtion on a student.
    void outputsStudentInfo();
    
    //This function returns the name of students.
    string getStudentName();
    
    //This function returns the nubmer of classes.
    int getNumberOfClasses();
    
    //This function returuns the list of classes.
    string getClassList();
    
    void resetStudentInfo(); //delete dynamic array to release memory
    
};

int main() {
    
    //This char is used to decide if the user keepts inputting data.
    char keepInput;
    
    do {
        
        //Initilaize a student
        Student student;
        
        //The user inputs the inforamtion on the sutdent
        student.inputsStudentInfo();
        
        //This program outputs the information the user entered.
        student.outputsStudentInfo();
        
        cout << endl;
        
        //This program asks the user if he wants to enter the data again.
        //Keep doing this until the user inputs y/n.
        do {
            cout << "Do you want to enter the data again?(y/n)";
            cin >> keepInput;
            keepInput = toupper(keepInput);
        } while(keepInput != 'Y' && keepInput != 'N');
        
    } while (toupper(keepInput) != 'N');
    
    return 0;
}

/*****************************************************************************
 * Student::Student() 
 * --------------------------------------------------------------------------
 *  This is a constractor.                     
 ******************************************************************************/
Student::Student() {
    //intentionally blank here
}


/*****************************************************************************
 * void Student::inputsStudentInfo()
 * --------------------------------------------------------------------------
 * This function askes the user to enter information on a student. The student
 * name might incllude some white spaces, so the function accepts a line of 
 * input. Also, the user could enter non digits as the numer of classes, so
 * this fucntion refuses such invalid inputs. 
 ******************************************************************************/
void Student::inputsStudentInfo() {
    
    
    cout << "Enter the student name ";
    getline(cin, name);
    
    do {
        
        cout << "Enter the number of classes ";
        cin >> numClasses; //do not accept non integer
        
    } while(isdigit(numClasses));
    
    classList = new string[numClasses];
    
    for (int index = 0; index < numClasses; index ++)
    {
        cout << "Enter the class name "; 
        cin >> classList[index];
    }
    
}

/*****************************************************************************
 * void Student::outputsStudentInfo() 
 * --------------------------------------------------------------------------
 * This member funciton outputs the information on a student in the following
 * 
 *   NAME            | Number of classes  |         Classe
 *   ------------------------------------------------------
 *   Shinya Yamamoto | 3                   Math
 *                                         Japanese
 *                                         Chem
 *                                    
 ******************************************************************************/
void Student::outputsStudentInfo() {
    
    //OUTPUT
    const int WIDTH = 20;
    cout << left;
    cout << setw(WIDTH) << "NAME" ;
    cout << setw(WIDTH) << "| Number of Classes" ;
    cout << setw(WIDTH)  << "| Classes" << endl;
    cout << "------------------------------------------------------------\n";
    cout << setw(WIDTH + 1) << name;
    cout << setw(WIDTH + 1) << numClasses;

    for (int index = 0; index < numClasses; index ++)
    {
        
        if(index == 0) {
            
            cout << setw(WIDTH + 1);
            
        } else {
            
            cout << setw(WIDTH * 2 + 2);
            cout << "";
        }
        
        cout  <<  classList[index] << endl;
    }
    
}

/*****************************************************************************
 * void Student::resetStudentInfo()
 * --------------------------------------------------------------------------
 * This function resets 
 *                                    
 ******************************************************************************/
void Student::resetStudentInfo() {
    
    
    //name = null;
    numClasses = 0;
    //Free the memory
    delete [] classList; 
    
}
    