#include <iostream>
#include "Player.h"
#include "GameManager.h"
#include <stdlib.h>
#include "Game.h"
using namespace std;
void TestScope()
{
	Player player1;
	player1.SetName("Jimmy", "Brady");

	GameManagement::WelcomePlayer(player1.GetName());

	Player player2;
	player2 = player1;

	return;
}

void TestGame()
{
	Game game;
	game.StartGame();

}
int main() {
	TestGame();
	system("pause");
}