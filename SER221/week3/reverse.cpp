/******************************************************
 * Programmed by : Shinya Yamamoto
 * Created on    : 24 January 2016
 * Class         : SER221
 * Week          : 3rd week
 * Problem       : Reverse
 ******************************************************/
//g++ -o reverse.exe reverse.cpp
#include <iostream>
#include <iomanip>
#include <string> 
#include <cctype>
using namespace std; 

typedef char* charPtr;

int main() {
    
   string userInput; // a string that the user inputs
   int length; //the length of string input by the user
   charPtr head; //pointer for head of string 
   charPtr tail; //pointer for tail of string
   char temp; //this holds a char temporarily.
   int index = 0; //this is the index of array
   
   //input string
   cout << "Enter a string" << endl;
   getline(cin, userInput);
  
   //set lenght
   length = userInput.length();
   
   //reverse prosess
   do{
      //set "head" pointer
      head = &userInput[index];
   
      //set "tail" pointer
      tail = &userInput[length-1-index];
   
      //swap chars on tail and head
      temp = userInput[index]; //save a character before overwrite
      *head = userInput[length - 1 - index]; //overwrite  
      *tail = temp; //overwrite by saved char

      index++;
      
   } while(head < tail); // loop until head reached tails

   //output 
   for(int k = 0; k < length ; k++){
       cout << userInput[k];
   }
   
    return 0;
}


    