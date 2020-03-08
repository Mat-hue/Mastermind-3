//Matthew Brown
//This is my own work

#ifndef MM_GUESS_H
#define MM_GUESS_H

#include <ctime>
#include <utility>

using namespace std;

class Guess {
private:
	int aGuess[4]; // array of 4 number guesses
	bool isValid(int);
		
	

public:
	Guess();
	void setGuess(int, int, int, int); //allows me to enter users guess
	void setMaster();
	int operator [](int index) { return aGuess[index]; }
};

bool Guess::isValid(int ch)
{
	return ch >= 0 && ch <= 5; //numbers 0-5
}
Guess::Guess()
{
	aGuess[0] = -1;
	aGuess[1] = -1;
	aGuess[2] = -1;
	aGuess[3] = -1;
	srand(time(0));
}
void Guess::setGuess(int a, int b, int c, int d) //sets the int to variables
{
	aGuess[0] = a; 
	aGuess[1] = b;
	aGuess[2] = c;
	aGuess[3] = d;
}
void Guess::setMaster()
{
	aGuess[0] = rand() % 6; // uses the variables to have random numbers 
	aGuess[1] = rand() % 6;
	aGuess[2] = rand() % 6;
	aGuess[3] = rand() % 6;

	cout << aGuess[0] << aGuess[1] << aGuess[2] << aGuess[3] << endl;
}

#endif

