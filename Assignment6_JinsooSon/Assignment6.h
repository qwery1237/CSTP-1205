#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <ctime>
using namespace std;

int won = 0;
int lost = 0;

void RandomNumGame() {
	srand(time(NULL));
	unsigned int randNum = rand() % 50;
	bool win = false;
	int chance = 20;
	while (chance--) {
		int guessedNum = 0;
		cout << "Enter a number" << endl;
		cin >> guessedNum;
		if (guessedNum == randNum) {
			won++;
			win = true;
			cout << "Congratulation!" << endl;
			break;
		}
	}
	if (!win) {
		lost++;
		cout << "You lost!" << endl << "The number was " << randNum;
	}
	cout << " Do you want to play again?(Y/N)" << endl;
	char s;
	cin >> s;
	if (s == 'Y') {
		RandomNumGame();
	}
	else {
		cout << "Won: " << won << " games" << endl << "Lost: " << lost << " games" << endl;
	}
}