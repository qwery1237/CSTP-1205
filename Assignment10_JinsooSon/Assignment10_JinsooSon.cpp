#include <iostream>
#include "Player.h"
#include "GameManager.h"
#include <stdlib.h>
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
	Player p1 = GameManagement::GetPlayerInformation();

	GameManagement::WelcomePlayer(p1.GetName());

	bool isPlaying = true;
	while (isPlaying)
	{
		isPlaying = GameManagement::RunGame();
	}
}
int main() {
	TestGame();
	system("pause");
}