/******************************************************
 * Programmed by : Shinya Yamamoto
 * Created on    : 11 Feb 2016
 * Class         : SER221
 * Week          : 5th week
 * Problem       : Exception
 *
 * 
 ******************************************************/
//g++ -o date.exe date.cpp
#include <stdio.h>
#include <iostream> 
#include <string> 
using namespace std; 

class Date 
{
public:
    Date();
    void SetDate(int yourDay, int yourMonth, int yourYear);
    void printDateStyleA();// 12/25/13
    void printDateStyleB();// December 25, 2013
    void printDateStyleC();// 25 December 2013
private:
    int day;
    int month;
    int year;
    string getStringMonth(int yourMonth);
};

//Throw when an invalid day (<1 or > 31) is passed to the class.
class InvalidDay{};
//Throw when an invalid month (<1 or > 12) is passed to the class
class InvalidMonth{};
//Throw when an invalid year (1900 < or > 2016) is passed to the class
class InvalidYear{};

int main() {
    
    Date birthday;
    int day, month, year;
    
    try
    {
        cout << "Enter a day ";
        cin >> day;
        if(day < 1 || day > 31)
            throw InvalidDay();
        
        cout << "Enter a month ";
        cin >> month;
        if(day < 1 || day > 31)
            throw InvalidMonth();
        cout << "Enter a year ";
        cin >> year;
        if(year < 1900 || year > 2017)
            throw InvalidYear();
            
        birthday.SetDate(day, month, year);
        
        cout << "********************" << endl;
        birthday.printDateStyleA();
        birthday.printDateStyleB();
        birthday.printDateStyleC();
        
    }
    
    catch(InvalidDay){
        
        cout << "Invalid Day";
    }
    
    catch(InvalidMonth){
        
        cout << "Invalid Moth";
    }
    
    catch(InvalidYear){
        
        cout << "Invalid Year";
    }
    
    return 0;
}

Date::Date() {
    
}

void Date::SetDate(int yourDay, int yourMonth, int yourYear) {
 day = yourDay;
 month = yourMonth;
 year = yourYear;
}

void Date::printDateStyleA(){
    
    int tempYear;
    if(year > 2000) {
        tempYear = year - 2000;
    }
        
    else if(year > 1900) {
        tempYear = year - 1900;
    }
    
    cout << day << "/"<< month << "/"<< tempYear  << endl;

}
void Date::printDateStyleB(){
    
    string tempMonth = getStringMonth(month);
    
    cout << tempMonth << day <<"," << year << endl;
            
}
void Date::printDateStyleC(){
    
    string tempMonth = getStringMonth(month);
    
    cout << day << tempMonth  << year << endl;
}

string Date::getStringMonth(int yourMonth) {
    
    string tempMonth;
    
    switch(yourMonth){
        case 1:
            tempMonth = "January";
            break;
        case 2:
            tempMonth = "February";
            break;
        case 3:
            tempMonth = "March";
            break;
        case 4:
            tempMonth = "April";
            break;
        case 5:
            tempMonth = "May";
            break;
        case 6:
            tempMonth = "June";
            break;
        case 7:
            tempMonth = "July";
            break;
        case 8:
            tempMonth = "August";
            break;
        case 9:
            tempMonth = "September";
            break;
        case 10:
            tempMonth = "October";
            break;
        case 11:
            tempMonth = "November";
            break;
        case 12:
            tempMonth = "December";
            break;
        default:
            cout << "INVALID" << endl;

    }
    
    return tempMonth;
    
}