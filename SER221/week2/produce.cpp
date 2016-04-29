/******************************************************
 * Programmed by : Shinya Yamamoto
 * Created on    : 17 January 2016
 * Class         : SER221
 * Week          : 2nd week
 * Problem       : BoxOfProduce Class
 *
 * This program randamaly selects three bundles of fruits
 * or vegetables as an array of type string, and the user
 * can substitute any one of possible fruits or vegetables
 * for any of the furits or vegetabels selected. 
 ******************************************************/
//g++ -o produce.exe produce.cpp
#include <iostream> 
#include <string> 
#include <cctype>
#include <ctime>
#include <cstdlib>
using namespace std; 

//This function gives me a random number between 1 to 5
int getRandomNumber();

class BoxOfProduce {
    
public:
    string content[3];
    static int numberOfBoxes;
    
    //constructo, initialize the box
    BoxOfProduce();

    //mutator(set) method
    void setContentOfBox();

    //mutator(set) method
    void changeContentOfBox();
    
    //accessor(get) method
    void showContentOfBox();
    
    //static member function
    static int getNumberOfBoxes();
    
};

/*************************************************************
 * GLOBAL VARIABLE
 * -----------------------------------------------------------
 * SIZE = 3 // This the size of content string
 * LISTS = 5; // This is the number of vegetables and fruits.
 *************************************************************/
const int SIZE = 3;
const int LISTS = 5;

int main() {
    
    char yesOrNo;
    int totalBoxes = 0;
    
    do {
        //initialize a box
        BoxOfProduce box;
        
        //randamly set the content of box
        box.setContentOfBox();
        
        //diplays the content of box
        box.showContentOfBox();
        
        cout << "Would you like to change one of the contents? (Y/N)" << endl;
        cin >> yesOrNo;
        
        if(toupper(yesOrNo) == 'Y'){
            //change the content of box
            box.changeContentOfBox();
        }
        
        //diplays the content of box
        box.showContentOfBox();
        
        //get the total number of boxes that have been created
        totalBoxes = box.getNumberOfBoxes();
        
        cout << "Do you want to create another box? (Y/N)" << endl;
        cin >> yesOrNo;
    
    } while(toupper(yesOrNo) == 'Y');
    
    cout << "The total number of boxes :" << totalBoxes <<  endl;
    
    return 0;
}

/*************************************************************
 * int getRandomNumber()
 *------------------------------------------------------------
 * This function generates a random number and returns it.
 * LISTS is 5, which is the number of vegetables or fruits
 *************************************************************/
int getRandomNumber() {
    
    return rand() % LISTS + 1;
}

/*************************************************************
 * BoxOfProduce::BoxOfProduce() 
 * -----------------------------------------------------------
 *  This is a constractor.                     
 *************************************************************/
BoxOfProduce::BoxOfProduce() {
    //intentionally blank here
}

/*************************************************************
 * void BoxOfProduce::setContentOfBox();
 *------------------------------------------------------------
 * This member function sets the content of box
 *************************************************************/
void BoxOfProduce::setContentOfBox() {
    
    unsigned seed = time(0); 
    srand(seed); 
    int random;
    
    for(int index = 0; index < SIZE; index ++) {
        random = getRandomNumber();
        switch (random) {
            case 1:
                content[index] = "Broccoli";
                break;
            case 2:
                content[index] = "Tomato";
                break;
            case 3:
                content[index] = "Kiwi";
                break;
            case 4:
                content[index] = "Kale";
                break;
            case 5:
                content[index] = "Tomatillo";
                break;
            default:
                cout << "ERROR";
         }
    }
}

/*************************************************************
 * void BoxOfProduce::changeContentOfBox();
 *------------------------------------------------------------
 * This member function asks the user to input the number to
 * change an element of content array and changes the elemet
 * depending on the user input.
 *************************************************************/
void BoxOfProduce::changeContentOfBox(){
    
    int indexOfContent; // this should be 0 to 2
    int indexOfItem;   // this should be 1 to 5
    
    cout << "Enter the number whose content you what to change" << endl;
    cin >> indexOfContent;
   
    cout << "Enter the nubmer you want to add" << endl;
    cout << "1. Broccoli" << endl;
    cout << "2. Tomato" << endl;
    cout << "3. Kiwi" << endl;
    cout << "4. Kale" << endl;
    cout << "5. Tomatillo" << endl;
    
    cin >> indexOfItem;
    
    switch(indexOfItem) {
        case 1:
            content[indexOfContent] = "Broccoli";
            break;
        case 2:
            content[indexOfContent] = "Tomato";
            break;
        case 3:
            content[indexOfContent] = "Kiwi";
            break;
        case 4:
            content[indexOfContent] = "Kale";
            break;
        case 5:
            content[indexOfContent] = "Tomatillo";
            break;
        default:
            cout << "ERROR";
    }
    
}

/*************************************************************
 * void BoxOfProduce::showContentOfBox();
 *------------------------------------------------------------
 * This member function outputs contents of box with 
 * index numbers 
 *************************************************************/
void BoxOfProduce::showContentOfBox(){
    
    cout << "Your box contains the followings" << endl;
     
    cout << "----------------------------------" << endl; 
    
    for(int index = 0; index < SIZE ; index ++) {
         
         cout << index << ". " << content[index] << endl;
     }
     
    cout << "----------------------------------" << endl; 
}

/*************************************************************
 * int BoxOfProduce::numberOfBoxes
 *------------------------------------------------------------
 * This is a static member varialbe to count the number of
 * boxes that has been created. Here, numberOfBoxes is 
 * initialized as 0.
 *************************************************************/
int BoxOfProduce::numberOfBoxes = 0;

/*************************************************************
 * void BoxOfProduce::getNumberOfBoxes();
 *------------------------------------------------------------
 * This static member function adds 1 to numberOfBoxes, then 
 * the function returns numberOfBoxes.
 *************************************************************/
//static member function NO NEED TO WRITE static here
int BoxOfProduce::getNumberOfBoxes() {
    
    return ++numberOfBoxes;
            
}