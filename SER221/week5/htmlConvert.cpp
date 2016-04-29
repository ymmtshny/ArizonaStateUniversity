/******************************************************
 * Programmed by : Shinya Yamamoto
 * Created on    : 11 January 2016
 * Class         : SER221
 * Week          : 1st week
 * Problem       : htmlConvert
 *
 * This program reads in a C++ source file and converts 
 * all ‘<’ symbols to “&lt;” and all ‘>’ symbols to “&gt;”.
 * Also add the tag <PRE> to the beginning of the file and </PRE>
 * to the end of the file. This tag preserves whitespace and
 * formatting in the HTML document.
 ******************************************************/
//g++ -o htmlConvert.exe htmlConvert.cpp
#include <stdio.h>
#include <iostream> 
#include <string> 
#include <cstring>
#include <fstream> //this for file I/O
#include <cstdlib> // for exit()
using namespace std; 

//This fuction takes the input and output streams as parameters.
void convert(ifstream &inStream, ofstream &outStream);


int main() {
    
    ifstream inStream;
    ofstream outStream;

    inStream.open("inputfile.cpp");
    outStream.open("outputfile.html");

    convert(inStream, outStream);
    
    inStream.close();
    outStream.close();
    
    return 0;
}
/**************************************************************
 * void convert(ifstream &inputStream, ofstream &outputStream)
 * ------------------------------------------------------------
 * This fuction takes the input and output streams as parameters.
 * The purpose of this funtion accepts any cpp file as an ifstream,
 * object and then change it to html file as an ofstream object.
 **************************************************************/
void convert(ifstream &inStream, ofstream &outStream) {
    
    char word;
    
    if (inStream.fail())
    {
        cout << "File open failed.\n";
        exit(1);
        
    } else {
    
        outStream << "<PRE>\n";
        while (!inStream.eof())
        {
            
            inStream >> word;
            
            if(word == '<') {
              
                outStream << "&lt;";
                
            } else if (word == '>') {
                
                outStream << "&gt;";
                
            } else if (word == '\n') {
                
                outStream << "\n";
                
            } else {
                
                outStream << word;
            }
            
        }
        outStream << "\n</PRE>\n";
        
        cout << "The program converted .cpp to .html file.";
    
    }

}