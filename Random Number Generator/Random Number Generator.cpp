#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;
void firstgame();    // nice
void secondgame();
void thirdgame();
void fourthgame();
void fifthgame();

int main()

{
	int count = 0;
	cout << "Press 1 to start the game" << endl;
	int yesno = 0;
	cin >> yesno;
	if (yesno == 1) {

		cout << "This game is about luck, each round you will have to guess a number, if you are correct you proceed to the next level. " << endl;
		cout << "if you are correct, but if not, you will have to try again from the beginning" << endl;
		cout << endl << endl;
	}
	cout << "Press 1 to Start your first game" << endl;
	cin >> yesno;
	if (yesno == 1) {

		firstgame(); // calls the first level
	}

}

void firstgame() {

	srand(time(0)); // generates true random numbers
	int rngint = (rand() % 5); // % = modulo selects range in between to get random numbers from
	cout << "Type your number here:" << endl;
	int guessNumber;
	cin >> guessNumber;
	if (guessNumber == rngint) {
		cout << rngint << endl; // this is for testing
		cout << "You got it right" << endl;
		cout << "Type 1 to proceed to the next level" << endl;
		int varint;
		cin >> varint;
		if (varint == 1) {
			secondgame(); // next level

		}
		else
		{
			cout << "man cmon" << endl;
			main(); // you are a dumbo
		}
	}
	else {
		cout << "Try again" << endl;
		main(); // start over
	}
}

void secondgame() {
	srand(time(0));
	int rngint = (rand() % 10);
	cout << "Type your number here:" << endl;
	int guessNumber;
	cin >> guessNumber;
	if (guessNumber == rngint) {
		cout << rngint << endl; // this is for testing
		cout << "You got it right" << endl;
		cout << "Type 1 to proceed to the next level" << endl;
		thirdgame();

	}
	else {
		cout << "Try again" << endl;
		main();
	}
}
void thirdgame() {

	srand(time(0));
	int rngint = (rand() % 15);
	cout << "Type your number here:" << endl;
	int guessNumber;
	cin >> guessNumber;
	if (guessNumber == rngint) {
		cout << rngint << endl; // this is for testing
		cout << "You got it right" << endl;
		cout << "Type 1 to proceed to the next level" << endl;
		fourthgame();

	}
	else {
		cout << "Try again" << endl;
		main();
	}
}
void fourthgame()
{
	srand(time(0));
	int rngint = (rand() % 20);
	cout << "Type your number here:" << endl;
	int guessNumber;
	cin >> guessNumber;
	if (guessNumber == rngint) {
		cout << rngint << endl; // this is for testing
		cout << "You got it right" << endl;
		cout << "Type 1 to proceed to the next level" << endl;
		//Call next level

	}
	else {
		cout << "Try again" << endl;
		main();
	}
}
void fifthgame()
{
	srand(time(0));
	int rngint = (rand() % 25);
	cout << "Type your number here:" << endl;
	int guessNumber;
	cin >> guessNumber;
	if (guessNumber == rngint) {
		cout << rngint << endl; // this is for testing
		cout << "You got it right" << endl;
		cout << "You have one the game (for now)" << endl; // maybe display floppa pic idk
	}
	else {
		cout << "Try again" << endl;
		main();
	}
}

