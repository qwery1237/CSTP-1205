#include <iostream>
#include "GameManager.h"

using namespace std;

void GameManagement::WelcomePlayer(const string& name)
{
	cout << "Welcome back " << name << " !" << endl;
}

bool GameManagement::RunGame()
{
	GivePlayerOptions();
	string playerInput;
	GetPlayerInput(playerInput);

	bool shouldRunGame = EvaluatePlayerInput(playerInput) != PlayerOptions::Quit;
	return shouldRunGame;
}

void GameManagement::GivePlayerOptions()
{
	cout << "Please enter your options NewGame(N) or Quit(Q)" << endl;
	// assignment 10: 
	// provide the text that explains (lists) the options
	// ask user to enter the input
}

void GameManagement::GetPlayerInput(string& playerInput)
{
	cin >> playerInput;
}

PlayerOptions GameManagement::EvaluatePlayerInput(const string& input)
{
	// assignment 10: check the validity and return the appropriate enum value
	if (input == "N" || input == "n") {
		return PlayerOptions::NewGame;
	}
	else {
		return PlayerOptions::Quit;
	}
}

Player GameManagement::GetPlayerInformation()
{
	// Get the Player username and player name from the console input
	// Create the player object and return it from the function

	// remove this line after adding your assignment
	string playerName, username;
	int id;
	cout << "Enter your name." << endl;
	GetPlayerInput(username);
	cout << "Enter a player name." << endl;
	GetPlayerInput(playerName);
	cout << "Enter your ID." << endl;
	cin >> id;
	Player player(playerName, username,id);

	return player;
}