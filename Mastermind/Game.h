//Matthew Brown
//This is my own work

#ifndef GAME_H
#define GAME_H
#include "MM_Guess.h"
#include <iostream>
#include <ctime>

class Game {
private:
	int whitePegs, blackPegs, numGuesses;
	Guess currGuess, secretCode;
	int getMin(int e, int s) {
		if (e < s)return e;
		else return s;
	}
public:
	Game() {
		whitePegs = 0;
		blackPegs = 0;  // these set everything to 0 when the game starts
		numGuesses = 0;

	}
	void playGame() {
		secretCode.setMaster();
		do {
			getUserGuess();
			generateFeedback();
			numGuesses++;
			if (blackPegs == 4) { //this shows a max of 4 black pegs
				cout << "You won" << endl;

			}
			else if (numGuesses == 10) { // max of 10 guesses
				cout << "You Lose" << endl;
			}
		} while (!isWinner() && !outOfGuesses());
	

	}

	void generateFeedback() {
		int userColors[6];
		int codeColors[6];
		whitePegs = 0;
		blackPegs = 0;
		for (int i = 0; i < 4; i++) // this compares my guess with the computers secretCode 
			//then returns that many black pegs
			if (currGuess[i] == secretCode[i])
				blackPegs++;
		{
		for (int i = 0; i < 6;i++) {
			userColors[i] = codeColors[i] = 0;

		}
		for (int i = 0;i < 4;i++) {
			userColors[currGuess[i]]++;
			codeColors[secretCode[i]]++;
		}
		for (int i = 0;i < 6;i++) {
			int x = getMin(userColors[i], codeColors[i]);
			whitePegs = whitePegs + x; // the rest of generate feedback is white pegs
			//this allows the remaining colors if present to tell the program
			//if i have no more black pegs if the numbers are correct return that many white pegs = 0 + X 
			//if the numbers match
		}
		whitePegs -= blackPegs;
		numGuesses++;
		cout << "You have " << blackPegs << " " << "Black Pegs" <<" and "<<whitePegs<<" White Pegs"<< endl;
		}

	

	}
		
	
	
	

	void getUserGuess() {
		cout << "Enter 4 numbers: ";
		int a, b, c, d;
		cin >> a >> b >> c >> d;
		currGuess.setGuess(a, b, c, d);
	}

	bool isWinner() {
		return blackPegs == 4;
	}

	bool outOfGuesses() {
		return numGuesses == 10;
	}

}; 
#endif