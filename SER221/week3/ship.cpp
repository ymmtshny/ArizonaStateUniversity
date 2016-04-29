/******************************************************
 * Programmed by : Shinya Yamamoto
 * Created on    : 24 January 2016
 * Class         : SER221
 * Week          : 3rd week
 * Problem       : Inheritance and Polymorphism
 *
 ******************************************************/
//g++ -o ship.exe ship.cpp
#include <iostream>
#include <iomanip>
#include <string> 
#include <cctype>
using namespace std; 

/** *************************************************************
 * class Ship
 * -------------------------------------------------------------
 * This class has two member variables. They are name of ship, and 
 * year that ship was build. Also, this class has two constructors:
 * the defalut constructor and the constructor with all member
 * variables. 
 ***************************************************************/
class Ship {
    
public:
    //member valiables
    string name;
    int year;
    
    //constructor
    Ship();
    Ship(string name, int year);
    
    //accessors (get)
    string getShipName();
    int getShipYear();
    
    //mutators (set)
    void setShip(string name, int year);
    
    void printShip();
    
};


/** *************************************************************
 * class Ship
 * -------------------------------------------------------------
 * inherits all member functions and member variables of Ship
 * overrides the print function in the base class.
 ***************************************************************/
class CruiseShip : public Ship {
    
public:
    //member valiables
    int maxPassengers;
    
    //constructor
    CruiseShip();
    CruiseShip(string nameInput, int yearInput, int maximumInput);
    
    //accessors (get)
    int getMaxPassengers();
    
    //mutators (set)
    void setShip(string nameInput, int yearInput, int maximumInput);
    void setMaxPassengers(int maximumInput);
    
    //overrides print function of the base class
    void printShip();
};

/** *************************************************************
 * class CargoShip
 * -------------------------------------------------------------
 * inherits all member functions and member variables of Ship
 * overrides the print function in the base class.
 ***************************************************************/
class CargoShip : public Ship {
    
public:
    //member valiables
    int capacity;
    
    //constructor
    CargoShip();
    CargoShip(string nameInput, int yearInput, int maximumInput);
    
    //accessors (get)
    int getMaxCapacity();
    
    //mutators (set)
    void setShip(string nameInput, int yearInput, int maximumInput);
    void setMaxCapacity(int maximumInput);
    
    //overrides print function of the base class
    void printShip();
};


/***************************************************************
 * The following functions check whether each class memeber function
 * correctly works or not. In each class, two obejcts are created.
 * One is made by the default constructor, the other is made by 
 * the constractor with all values. After creating these objects,
 * the functions print out the informaiton on each object by 
 * using print funtion of each class.
 ***************************************************************/
void testShipClass();
void testCruiseShipClass();
void testCargoShipClass();

int main() {
    
    //check member function of Ship class
    testShipClass();
    //check member function of CruiseShip class
    testCruiseShipClass();
    //check member function of CargoShip class
    testCargoShipClass();
    
    return 0;
}

/***************************************************************
 * void testShipClass() 
 * -------------------------------------------------------------
 * This function asks the user to input the name and year of ship.
 * Then, the function calls the contructors to initialize objects.
 * After that, this function prints out the inforamtion on
 * each object. The main purpose of this fucntion is to check
 * if member funtions works correctly.
 ***************************************************************/
void testShipClass() {
    
    string name;
    int year;

    //(1)-Ship
    cout << "-------------------------------------------------------\n";
    cout << "We are going to create a ship from Ship Class" << endl;
    cout << "Enter the name of ship ";
    cin >> name;
    cout << "Enter the year of ship ";
    cin >> year;
    Ship ship_one(name, year);
    
    //(2)-Ship
    cout << "Create another ship" << endl;
    cout << "Enter the name of ship ";
    cin >> name;
    cout << "Enter the year of ship ";
    cin >> year;
    
    Ship ship_two;
    ship_two.setShip(name, year);
    
    //OUTPUT
    cout << endl;
    cout << "[ Print out ships inforamtion ]" << endl;
    ship_one.printShip();
    ship_two.printShip();
    
}

/***************************************************************
 * void testCruiseShipClass() 
 * -------------------------------------------------------------
 * This function asks the user to input the name and year of ship.
 * Then, the function calls the contructors to initialize objects.
 * After that, this function prints out the inforamtion on
 * each object. The main purpose of this fucntion is to check
 * if member funtions works correctly.
 ***************************************************************/
void testCruiseShipClass() {
    
    string name;
    int year;
    int maxPassengers;

    //(1)-Ship
    cout << "-------------------------------------------------------\n";
    cout << "We are going to create a ship from CruiseShip Class" << endl;
    cout << "Enter the name of ship ";
    cin >> name;
    cout << "Enter the year of ship ";
    cin >> year;
    cout << "Enter  the maximum number of passengers ";
    cin >> maxPassengers;
    CruiseShip ship_one(name, year, maxPassengers);
    
    //(2)-Ship
    cout << "Create another ship" << endl;
    cout << "Enter the name of ship ";
    cin >> name;
    cout << "Enter the year of ship ";
    cin >> year;
    cout << "Enter the maximum number of passengers ";
    cin >> maxPassengers;
    
    CruiseShip ship_two;
    ship_two.setShip(name, year, maxPassengers);
    
    cout << endl;
    cout << "[ Print out ships inforamtion ]" << endl;
    ship_one.printShip();
    ship_two.printShip();
    
}

/***************************************************************
 * void testCargoShipClass() 
 * -------------------------------------------------------------
 * This function asks the user to input the name and year of ship.
 * Then, the function calls the contructors to initialize objects.
 * After that, this function prints out the inforamtion on
 * each object. The main purpose of this fucntion is to check
 * if member funtions works correctly.
 ***************************************************************/
void testCargoShipClass() {
    string name;
    int year;
    int maxCapacity;

    //(1)-Ship
    cout << "-------------------------------------------------------\n";
    cout << "We are going to create a ship from CargoShip Class" << endl;
    cout << "Enter the name of ship ";
    cin >> name;
    cout << "Enter the year of ship ";
    cin >> year;
    cout << "Enter  the maximum capacity ";
    cin >> maxCapacity;
    CargoShip ship_one(name, year, maxCapacity);
    
    //(2)-Ship
    cout << "Create another ship" << endl;
    cout << "Enter the name of ship ";
    cin >> name;
    cout << "Enter the year of ship ";
    cin >> year;
    cout << "Enter  the maximum capacity ";
    cin >> maxCapacity;
    
    CargoShip ship_two;
    ship_two.setShip(name, year, maxCapacity);
    
    cout << endl;
    cout << "[ Print out ships inforamtion ]" << endl;
    ship_one.printShip();
    ship_two.printShip();
}

/** *************************************************************
 * Member functions of Ship Class
 ***************************************************************/
//This is the defalut constructor
Ship::Ship() {
    //intentionally blank here
}
 
//This is a constructor that takes all valuse of member variables of Ship   
Ship::Ship(string nameInput, int yearInput) {
    
    name = nameInput;
    year = yearInput;
    
}   

//This is the accessors (get) that returns the name of ship
string Ship::getShipName() {
    
    return name;
    
}

//This is the accessors that returns the year of ship
int Ship::getShipYear() {
    
    return year;
    
}
    
//This is a mutators (set) that sets the name and year of ship
void Ship::setShip( string nameInput, int yearInput) {
    
    name = nameInput;
    year = yearInput;
    
}
    
//This void function outputs the name and year of ship
void Ship::printShip() {
    
    cout << "----------------------------" << endl; 
    cout << "Name: " << name << endl;
    cout << "Year: " << year << endl;
    
}

/***************************************************************
 * Member functions of CruiseShip Class
 ***************************************************************/
//default constructor
CruiseShip::CruiseShip() {
    //intentionally blank here
}

//constructor with all variables
CruiseShip::CruiseShip(string nameInput, int yearInput, int maximumInput) {
    name = nameInput;
    year = yearInput;
    maxPassengers = maximumInput;
} 

//accessors (get)
int CruiseShip::getMaxPassengers() {
    return maxPassengers;
}

//mutators (set)
void CruiseShip::setMaxPassengers(int maximumInput) {
    
    maxPassengers = maximumInput;
}

//Override the setShip function in the base class.
void CruiseShip::setShip(string nameInput, int yearInput, int maximumInput) {
    
    name = nameInput;
    year = yearInput;
    maxPassengers = maximumInput;
}

//Override the print function in the base class.
//This void function  display only the ship’s name 
//and the maximum number of passengers.
void CruiseShip::printShip() {
    
    cout << "---------------------------------" << endl; 
    cout << "Name          : " << name << endl;
    cout << "Max passengers: " << maxPassengers << endl;
    
}

 
/***************************************************************
 * Member functions of CargoShip Class
 ***************************************************************/
//default constructor
CargoShip::CargoShip() {
    //intentionally blank here
}
//constructor with all variables
CargoShip::CargoShip(string nameInput, int yearInput, int maximumInput) {
    name = nameInput;
    year = yearInput;
    capacity = maximumInput;
}

//accessors (get)
int CargoShip::getMaxCapacity() {
    return capacity;
}

//mutators (set)
//Override the setShip function in the base class.
void CargoShip::setShip(string nameInput, int yearInput, int maximumInput) {
    
    name = nameInput;
    year = yearInput;
    capacity = maximumInput;
}

void CargoShip::setMaxCapacity(int maximumInput) {
    capacity = maximumInput;
}

//overrides print function of the base class
//display only the ship’s name and the ship’s cargo capacity.
void CargoShip::printShip() {
    
    cout << "---------------------------------" << endl; 
    cout << "Name          : " << name << endl;
    cout << "Max capacity  : " << capacity <<  "(t)"<< endl;
}