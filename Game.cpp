//#include <iostream>
//#include <string>
//#include "Game.h"
//#include <cstdlib>
//#include "MM_Guess.h"
//#include <sstream>
//using namespace std;
//
//Game::Game() {}
//
//void Game::playGame() {
//	
//	Guess guesser = Guess();
//	guesser.setMaster();
//	int guesses_arr[4]; 
//	while (true) {
//		string guesses;
//		getline(cin, guesses);
//		istringstream iss(guesses);
//		int i = 0;
//		for (string s;iss >> s;) {
//			if (s == " ") continue;
//			guesses_arr[i] = stoi(s);
//			i++;
//			
//		}
//		for (int i = 0;i < 4;i++) {
//			cout << guesses_arr[i] << endl;
//		}
//		
//		guesser.compareGuesses(guesses_arr);
//
//		
//	}
//
//}
//
//void Game::generateFeedback() { return; }
//void Game::getUserGuess() { return; }
//bool Game::isWinner() { bool b = true; return b; }
//bool Game::outOfGuesses() { bool b = true; return b; }
