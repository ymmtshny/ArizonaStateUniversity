/******************************************************************************
 * Programmed by : Shinya Yamamoto
 * Created on    : 15 January 2016
 * Class         : SER221
 * Week          : 1st week
 * Problem       : Pig Game
 *
 * This Pig Game lets the two player roll 6 sided dice.
 * If the dice is 2-6, then the player picks up
 * (1) roll again, or (2) Hold. If the player hold, then
 * the player gets the point.
 * If the dice is 1, then the player gets no point.
 * If a player reaches 100 or more points 
 * after holding then the player wins.
 * In this program, one player is a human and the other is
 * the computer. The computer keeps rolling on the
 * computer’s turn until it has accumulated 20 or more points,
 * then hold. 
 ******************************************************************************/
//g++ -o pigGame.exe pigGame.cpp
#include <iostream> 
#include <ctime>
#include <cstdlib>
#include <cctype>

using namespace std; 

/*******************************************************
* void printoutExplanation();
* ------------------------------------------------------
* This function just print outs the game explanation for
* the user. The function returns nothing.
********************************************************/
void printoutExplanation();

/*******************************************************
* int humanTurn(int humanTotalScore);
* ------------------------------------------------------
* This function returns the turn total to be added
* to the total score upon completion of the turn. 
********************************************************/
int humanTurn(int humanTotalScore);

/*******************************************************
* int computerTurn(int hucomputerTotalScoremanTotalScore);
* ------------------------------------------------------
* This function returns the turn total to be added
* to the total score upon completion of the turn. 
********************************************************/
int computerTurn(int computerTotalScore);

/*******************************************************
* void decideWinner(int humanPoint, int computerPoint);
* ------------------------------------------------------
* This function accepts two argeuments: human's total points
* and computer's total points. Then this function decides
* who wins this game.
********************************************************/
void decideWinner(int humanPoint, int computerPoint);


int main() {
    
   //VARIBALES
   int humanPoint = 0;    //the total points of human
   int computerPoint = 0; //the total points of computer
   int turnPoint = 0;     //points in the sigle turn
   bool keepPlayingGame = true;
   unsigned seed = time(0); 
   srand(seed); 
   
   //Call this fucntion to print out the game explanation.
   printoutExplanation();
   
    do{
        
        if(humanPoint < 120 && computerPoint < 120) {
        
            cout << "Your turn" << endl;
            turnPoint = humanTurn(humanPoint);
            cout << "Your turn ends." << endl;
            // calculate the total points
            humanPoint = humanPoint + turnPoint;
            // reset turn points.
            turnPoint = 0;
            cout << "Your total point is " << humanPoint <<  endl;
            cout << "====================================" <<endl;
        }
        
        
        
        if(humanPoint < 120 && computerPoint < 120){
       
            cout << "Computer's turn" << endl;
            turnPoint = computerTurn(computerPoint);
            cout << "Computer's turn ends" << endl;
            // calculate the total points
            computerPoint = computerPoint + turnPoint;
            // reset turn points.
            turnPoint = 0;
            cout << "Computer's total point is " << computerPoint << endl;
            cout << "===================================" <<endl;
         }
         
         
    
    } while (humanPoint < 120 && computerPoint < 120);
    
    //Call this function to dicide who wins.
    decideWinner(humanPoint, computerPoint);

    return 0;
}

/*******************************************************************************
 * void printoutExplanation()
 * -----------------------------------------------------------------------------
 * This function just print outs the game explanation for
 * the user. The function returns nothing.
 ******************************************************************************/
void printoutExplanation() {
    
    cout << "Pig Game!!" << endl;
    cout << "In this gaem you roll the 6 sided dice."
         << "If the dice is 2-6, then the player picks up"
         << "(1) roll again, or (2) Hold. If the player hold, then"
         << "the player gets the point."
         << "If the dice is 1, then the player gets no point."
         << "If a player reaches 100 or more points "
         << "after holding, then the player wins." << endl;
    cout << "===================================" <<endl;
    
}

/******************************************************************************
 * int humanTurn(int humanTotalScore)
 * -----------------------------------------------------------------------------
 * This function returns Player's turn points, an integer showing the total points
 * of a single turn. This function returns 0 if the number of dice is 1. Also,
 * this function accepts an argument, humanTotalScore, which shows the total
 * points of the player.
 *******************************************************************************/
int humanTurn(int humanTotalScore) {
    
    int turnPoint = 0;
    bool keepPlayingGame = true;
    char humanInput;
    
    cout << "Enter R to roll dice " << endl;
    do {
        cin >> humanInput;
    } while( toupper(humanInput) != 'R');
    
    do {
        
        //generate a random number between 1 to 6.
        int diceNumber = rand() % 6 + 1;
        
        // output the dice number
        cout << "You roll a " <<  diceNumber << endl;
        
        // When the dice is 1, the point this turn is 0.
        if(diceNumber == 1) {
            cout << "You get no points" << endl;
            turnPoint = 0;
            return 0;
            
        // Ohterwise, add diceNumber to turn Point.
        } else {
            
            turnPoint = turnPoint + diceNumber; 
            cout << "You will get " << turnPoint << " points" << endl;
            
        }
    
        do {    
            
            cout << "Will you roll or hold? Enter R or H ";
            cin >> humanInput;
            
        } while( toupper(humanInput) != 'R' &&
                 toupper(humanInput) != 'H');
        
        if( toupper(humanInput) == 'R'){
                
            keepPlayingGame == true;
                    
        } else if( toupper(humanInput) == 'H' ) {
                
            keepPlayingGame = false;
                
        } else {
            
            //This should not happen 
            cout << "Enter H or R" << endl;
            keepPlayingGame = true;
                
        }
        
    } while (keepPlayingGame == true);
    
    return turnPoint;
}

/******************************************************************************
* int computerTurn(int computerTotalScore) 
* ------------------------------------------------------
* This function returns Computer's turn points, an integer showing the total points
* of a single turn. This function returns 0 if the number of dice is 1. Also,
* this function accepsts an argument, computerTotalScore, which shows the total
* points of the computer.
*******************************************************************************/
int computerTurn(int computerTotalScore) {
    
     int turnPoint = 0;
     int diceNumber;
     
    do {
        
        diceNumber = rand() % 6 + 1;
        cout << "The computer rolled a " <<  diceNumber << endl;
        
         if(diceNumber == 1) {
            cout << "The computer gets no points" << endl;
            turnPoint = 0;
            return turnPoint;
        } else {
            turnPoint = turnPoint + diceNumber; 
            cout << "The computer will get " << turnPoint << " points" << endl;
        }
    
    }while(turnPoint <= 20);
    
    return turnPoint;
}

/*******************************************************************************
* void decideWinner(int humanPoint, int computerPoint);
* ------------------------------------------------------------------------------
* This function accepts two argeuments: human's total points
* and computer's total points. Then this function decides
* who wins this game.
*******************************************************************************/
void decideWinner(int humanPoint, int computerPoint) {
    
    if(humanPoint > 120 ) {
        
        cout << "You win!!" << endl;
        
    } else if (computerPoint > 120) {
        
        cout << "You lose..." << endl; 
        
    } else {
        
        cout << "ERROR" << endl;
    }
    
}