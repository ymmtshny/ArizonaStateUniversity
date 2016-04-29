/******************************************************
 * Programmed by : Shinya Yamamoto
 * Created on    : 7 February 2016
 * Class         : SER221
 * Week          : 4th week
 * Problem       : Templates & Operator Overloading
 *
 ******************************************************/
//g++ -o simpleVector.exe simpleVector.cpp
#include <stdio.h>
#include <iostream> 
#include <string> 
using namespace std; 


/******************************************************
 * Template class named SimpleVector
 * An array that can hold any specified
 * data type. Use a dynamic array.
 ******************************************************/
template<class T>
class SimpleVector 
{
public:
    //default constructor
    SimpleVector();
    //constructor with size of array
    SimpleVector(int size);
    //copy constructor
    SimpleVector(const SimpleVector<T>& object);
    //setter method
    void SetArray(int size);
    //getter method
    void ShowArray(int size);
    //destructor
    void FreeMemory();
    //accessor method
    int GetSizeOfArray();
    //getter method 
    T GetElementAt(int index);
    
//Overload the [] operator. The argument is a subscript.
//This function returns a reference
//to the element in the array indexed by the subscript.
    T operator [] (int subscript);
private:
    //private memeber variable
    T *array; //to dynamically allocate an array
    T *copy;
};

//These function are going to be used in switch statement
//in order to test each case(integer, double, string).
void caseOne(int userInput, int size);
void caseTwo(int userInput, int size);
void caseThree(int userInput, int size);

int main() {
    
    int userInput;
    int size;
    char keepInput;
    
    do {
        
        cout << "What type of data do you want?\n";
        cout <<"1. intger\n";
        cout <<"2. double\n";
        cout <<"3. strings\n";
        cin >> userInput;
        cout << "Enter the number of data ";
        cin >> size;
        
        switch(userInput) {
            
            case 1:
            {
                caseOne(userInput, size);
                break;    
            }
            
            case 2:
            {
                caseTwo(userInput, size);
                break;
            }
            case 3:
            {
                caseThree(userInput, size);
                break;
            }
            default:
                cout << "invalid input";
        }
        
        
        cout << "\nDo you want to enter the data again?(Y/N)\n";
        cin >> keepInput;
        
    } while(toupper(keepInput) == 'Y');
    
    return 0;
}

//This funciton is called in the switch satatement
//The purpose of this funtion is test SimpleVecor calss
//funciton for 'int' type.
void caseOne(int userInput, int size) {
    
    SimpleVector<int>integerData(size);
    integerData.SetArray(size);
    integerData.ShowArray(size);
    
    cout << "\nEnter an index to retrieve the data\n";
    cin >> userInput;
    
    cout << "\nGetting an element of array by \n";
    cout << "1. GetElementAt function : ";
    cout << integerData.GetElementAt(userInput);
    
    cout << "\n2. overloaded operator [] : ";
    cout << integerData[userInput];
    
    cout << "\n\nCopying the array";
    SimpleVector<int>newIntegerData(integerData);
    newIntegerData.ShowArray(size);  
    newIntegerData.FreeMemory();
} 

//This funciton is called in the switch satatement
//The purpose of this funtion is test SimpleVecor calss
//funciton for 'double' type.
void caseTwo(int userInput, int size) {
    
    SimpleVector<double>doubleData(size);
    doubleData.SetArray(size);
    doubleData.ShowArray(size);
    
    cout << "\nEnter an index to retrieve the data\n";
    cin >> userInput;
    
    cout << "\nGetting an element of array by \n";
    cout << "1. GetElementAt function : ";
    cout << doubleData.GetElementAt(userInput);
    
    cout << "\n2. overloaded operator [] : ";
    cout << doubleData[userInput];
    
    cout << "\n\nCopying the array";
    SimpleVector<double>newDoubleData(doubleData);
    newDoubleData.ShowArray(size);  
    newDoubleData.FreeMemory();
    
}

//This funciton is called in the switch satatement
//The purpose of this funtion is test SimpleVecor calss
//funciton for 'string' type.
void caseThree(int userInput, int size) {
    
    SimpleVector<string>stringData(size);
    stringData.SetArray(size);
    stringData.ShowArray(size);
    
    cout << "\nEnter an index to retrieve the data\n";
    cin >> userInput;
    
    cout << "\nGetting an element of array by \n";
    cout << "1. GetElementAt function : ";
    cout << stringData.GetElementAt(userInput);
    
    cout << "\n2. overloaded operator [] : ";
    cout << stringData[userInput];
    
    cout << "\n\nCopying the array";
    SimpleVector<string>newStringData(stringData);
    newStringData.ShowArray(size);  
    newStringData.FreeMemory();
}


/******************************************************
 * This is the default constructor
 ******************************************************/
template<class T>
SimpleVector<T>::SimpleVector() {
    
    int size = 0;
    array  = new T[size];

}

/******************************************************
 * This is the constructor wiht the size of array
 ******************************************************/
template<class T>
SimpleVector<T>::SimpleVector(int size) {

    array  = new T[size];
    
}

/******************************************************
 * This is a copy constructor. This constructor accepts
 * a SimpleVector object as an argument, and copy the 
 * elements of array of accepeted objects. 
 ******************************************************/
template<class T>
SimpleVector<T>::SimpleVector(const SimpleVector<T>& object) {
    
    int size = sizeof(array); //set the size of array
    array = new T[size]; 
    
    //copy each element of array
    for(int index = 0; index < size; index ++)
    {
        array[index] = object.array[index];    
    }
    
}

/******************************************************
 * This function accepts user's input. The inputs
 * are going to be an elemnt of array.
 ******************************************************/
template<class T>
void SimpleVector<T>::SetArray(int size) {

    cout << "\nEnter the data\n";
    for(int index = 0; index < size; index ++) {
            
        cin >> array[index];
                
    }
    
}

/******************************************************
 * This function outputs all data in the array.
 ******************************************************/
template<class T>
void SimpleVector<T>::ShowArray(int size) {
    
    cout << "\nHere is your array\n";
    for(int index = 0; index < size; index ++) {
            
        cout << array[index];
        
        if(index != size -1){
            cout << ", ";
        }
        
    }
    
}

/******************************************************
 * This is a destructor that deallocates the memory
 * allocated to the dynamic array
 ******************************************************/
template<class T>
void SimpleVector<T>::FreeMemory() {
    
    delete [] array;
    
}

/******************************************************
 * This function accept an array as an argument and return
 * an integer, which is the size of array.
 ******************************************************/
template<class T>
int SimpleVector<T>::GetSizeOfArray() {
    
    return sizeof(array);
    
}

/******************************************************
 * This function accept an integer as an argument and 
 * returns the element at the index of the integer.
 ******************************************************/
template<class T>
T SimpleVector<T>::GetElementAt(int index) {
    
    return array[index];
}

/******************************************************
 * Here, [] operator is overloading
 * For example, let the following true.
 * SimpleVectorObject1[0] == SimpleVectorObject2.array[0]
 ******************************************************/
template<class T>
T SimpleVector<T>::operator [] (int subscript) {
    
    T element;
    element = array[subscript];
    return element;
}