#include "Game.h"

Game::Game(void)
{
	currPlayer = false;
}

void Game::switchPlayer()
{
	currPlayer = ! currPlayer;
}

bool Game::getPlayer()
{
	return currPlayer;
}
