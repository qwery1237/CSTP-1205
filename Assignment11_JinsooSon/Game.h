#pragma once
#include <iostream>
#include "Player.h"

using namespace std;

class Game
{
private:
	int won;
	int lost;
	bool RunGame();
	Player GetPlayerInformation();
	void WelcomePlayer(const string& name);

public:
	Game();
	void StartGame();
};