#include <iostream>
#include "GameManager.h"

using namespace std;

void GameManagement::WelcomePlayer(const string& name)
{
	cout << "Welcome back " << name << " !" << endl;
}

bool GameManagement::RunGame()
{
	GameManagement::GivePlayerOptions();
	string playerInput;
	GameManagement::GetPlayerInput(playerInput);

	bool shouldRunGame = EvaluatePlayerInput(playerInput) != PlayerOptions::Quit;
	return shouldRunGame;
}

void GameManagement::GivePlayerOptions()
{
	cout << "Please enter your options NewGame(N) or Quit(Q)" << endl;
	string playerInput;
	GameManagement::GetPlayerInput(playerInput);
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
	if (input == "N") {
		return PlayerOptions::NewGame;
	}
	if (input == "Q") {
		return PlayerOptions::Quit;
	}
	return PlayerOptions::Unknown;
}

Player GameManagement::GetPlayerInformation()
{
	// Get the Player username and player name from the console input
	// Create the player object and return it from the function

	// remove this line after adding your assignment
	string playerName, username;
	cout << "Enter your name."<< endl;
	GameManagement::GetPlayerInput(username);
	cout << "Enter a player name." << endl;
	GameManagement::GetPlayerInput(playerName);
	Player player(playerName, username);

	return player;
}