/******************************************************
 * Programmed by : Shinya Yamamoto
 * Created on    : 12 January 2016
 * Class         : SER221
 * Week          : 1st week
 * Problem       : Rock, Paper, Scissor
 *
 * This program lets the two players play Rock, Paper, 
 * Scissor game and keeps the score. The players can
 * continue game until they stop the game.
 ******************************************************/
//g++ -o rps.exe rps.cpp
#include <stdio.h>
#include <iostream> 
#include <string> 
#include <cctype>

using namespace std; 

int main() {
    
    //Variables 
    char player1;
    char player2;
    int  score1 = 0;
    int  score2 = 0;
    char continueGame;
    bool keepPlayingGame;
    bool validInput;
    
    do {
        
        //INPUT VALIDATION FOR PLAYER 1
        do {
            
            cout << "Player 1: Please enter either (R)ock, (P)aper, or (S)cissors: ";
            cin >> player1;
            player1 = toupper(player1);
            if(player1 == 'R' || player1 == 'S' || player1 == 'P') {
                validInput = true;
            } else {
                validInput = false;
                cout << "ENTER R, P, or S." << endl;
            }
        
        } while(validInput == false);
        
        
        //INPUT VALIDATION FOR PLAYER 2
        do {
            
            cout << "Player 2: Please enter either (R)ock, (P)aper, or (S)cissors: ";
            cin >> player2;
            player2 = toupper(player2);
            if(player2 == 'R' || player2 == 'S' || player2 == 'P') {
                validInput = true;
            } else {
                validInput = false;
                cout << "ENTER R, P, or S." << endl;
            }
        
        } while(validInput == false);
        
        //PROCESS
        if(player1 == 'R' && player2 == 'R') {
            
            cout <<  "draw";
            
        } else if (player1 == 'R' && player2 == 'P') {
            
            cout << "Player2 wins!";
            score2 ++ ;
            
        } else if (player1 == 'R' && player2 == 'S') {
            
            cout << "Player1 wins!";
            score1 ++ ;
            
        } else if (player1 == 'P' && player2 == 'R') {
            
            cout << "Player1 wins!";
            score1 ++ ;
            
        } else if (player1 == 'P' && player2 == 'P') {
            
            cout <<  "draw";
            
        } else if (player1 == 'P' && player2 == 'S') {
            
            cout << "Player2 wins!";
            score2 ++ ;
            
        } else if (player1 == 'S' && player2 == 'R') {
            
            cout << "Player2 wins!";
            score2 ++ ;
            
        } else if (player1 == 'S' && player2 == 'P') {
            
            cout << "Player1 wins!";
            score1 ++ ;
             
        } else if (player1 == 'S' && player2 == 'S') {
            
            cout <<  "draw";
        
        } else {
            
            cout << "ERROR";
        } 
        
        cout << endl;
        cout << "Player1 : " << score1 << endl;
        cout << "Player2 : " << score2 << endl;
        
        do{
        
            cout << "Play again? Y/y continues, other quits: n" << endl;
            cin >> continueGame;
            continueGame = toupper(continueGame);
            if(continueGame == 'Y'){
         
                keepPlayingGame = true;
                validInput = true;
            
            }else if(continueGame == 'N') {
            
                keepPlayingGame = false;
                validInput = true;
            
            } else {
            
                cout << "Enter Y/y or n" << endl;
                validInput = false;
            }
            
            
        } while(validInput == false);
        
    }while(keepPlayingGame == true);
    
    cout << "Thanks!";
    
    return 0;
}
