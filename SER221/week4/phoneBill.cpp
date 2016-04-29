/******************************************************************************
 * Programmed by : Shinya Yamamoto
 * Created on    : 7 February 2016
 * Class         : SER221
 * Week          : 4th week
 * Problem       : Virtual Functions 
 *
 ******************************************************************************/
//g++ -o phoneBill.exe phoneBill.cpp
#include <stdio.h>
#include <iostream> 
#include <string> 
using namespace std; 


/******************************************************************************
 * class Customer
 * ---------------------------------------------------
 * 
 ******************************************************************************/
class Customer {
    
public:
    Customer();
    Customer(string name, int numCalls, int numMins); 
    virtual void ComputeBill();
    
//private:
    int numberOfCalls;
    int numberOfMins;
    string customersName;
    float bill;
    float monthlyFee;
};

/******************************************************************************
 * class PremiumCustomer
 * ---------------------------------------------------
 * This class inherits the base class, Customer.
 ******************************************************************************/
class PremiumCustomer: public Customer {

public:
    virtual void ComputeBill();
    PremiumCustomer();
    PremiumCustomer(string name, int numCalls, int numMins); 

};

/******************************************************************************
 * void ShowBetterPlan(Customer customerA, PremiumCustomer premiumCustomerA);
 * ---------------------------------------------------
 * This funtion accepts two parameters. One is an instance of Customer, 
 * and the other is an instance of PremiumCustomer. This function 
 * determins which plan is better by comparing bills.
 ******************************************************************************/
void ShowBetterPlan(Customer customerA, PremiumCustomer premiumCustomerA);

int main() {
    
    Customer customerA("John", 30, 3);
    PremiumCustomer premiumCustomerA("John", 30, 3);
    Customer customerB("Bob", 60, 10);
    PremiumCustomer premiumCustomerB("Bob", 60, 3);
    
    customerA.ComputeBill();
    premiumCustomerA.ComputeBill();
    customerB.ComputeBill();
    premiumCustomerB.ComputeBill();
    
    ShowBetterPlan(customerA, premiumCustomerA);
    ShowBetterPlan(customerB, premiumCustomerB);
    
    return 0;
}

/******************************************************************************
 * menber functions of Cusotmer
 ******************************************************************************/
Customer::Customer() {
    //intentioinally empty here    
}

Customer::Customer (string name, int numCalls, int numMins){
    customersName = name;
    numberOfCalls = numberOfCalls;
    numberOfMins = numberOfMins;
}

void Customer::ComputeBill(){
    
    const int MONTHLY_FEE = 10;
    const float PER_CALL_CHARGE = 0.50;
    
    bill = MONTHLY_FEE + PER_CALL_CHARGE * numberOfCalls;
    
}

/******************************************************************************
 * menber functions of PremiumCusotmers
 ******************************************************************************/


PremiumCustomer::PremiumCustomer() {
    //intentioinally empty here
}

PremiumCustomer::PremiumCustomer(string name, int numCalls, int numMins) {
    customersName = name;
    numberOfCalls = numberOfCalls;
    numberOfMins = numberOfMins;
}

//overload CumputeBill function 
void PremiumCustomer::ComputeBill(){
    
    const int MONTHLY_FEE = 20;
    const float PER_CALL_CHARGE = 0.05;
    const float PER_MIN_CHARGE = 0.10;
    
    bill = MONTHLY_FEE + PER_CALL_CHARGE * numberOfCalls + PER_MIN_CHARGE * numberOfMins;
    
}

/******************************************************************************
 * void ShowBetterPlan(Customer customerA, PremiumCustomer premiumCustomerA);
 * ---------------------------------------------------
 * This funtion accepts two parameters. One is an instance of Customer, 
 * and the other is an instance of PremiumCustomer. This function 
 * determins which plan is better by comparing bills.
 ******************************************************************************/
void ShowBetterPlan(Customer customerA, PremiumCustomer premiumCustomerA) {
    
    if(customerA.bill <= premiumCustomerA.bill) {
        
        cout << "Basic plan is better" << endl;
    
    } else {
        
        cout << "Premium plan is better" << endl;
    
    }

}