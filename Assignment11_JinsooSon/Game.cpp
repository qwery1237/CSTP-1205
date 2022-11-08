#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <ctime>
#include "Game.h"
#include "GameManager.h"
using namespace std;

Game::Game() {
	won = 0;
	lost = 0;
}

bool Game::RunGame()
{
	return GameManagement::RunGame();
}

Player Game::GetPlayerInformation()
{
	return GameManagement::GetPlayerInformation();
}

void Game::WelcomePlayer(const string& name)
{
	GameManagement::WelcomePlayer(name);
}

void Game::StartGame()
{
	Player player = GetPlayerInformation();
	WelcomePlayer(player.GetName());
	while (RunGame()) {
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
			cout << "The number was not " << guessedNum << endl << "You have " << chance << " more chances!" << endl;
		}
		if (!win) {
			lost++;
			cout << "You lost!" << endl << "The number was " << randNum << endl;
		}
	}
	cout << "Won: " << won << " games" << endl << "Lost: " << lost << " games" << endl;
}