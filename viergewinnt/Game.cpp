#include "Game.h"

Game::Game(void)
{
	for (int x = 0; x < 7; x++)
	{
		for (int y = 0; y < 6; y++)
		{
			field[x][y] = 0;
		}
	}
	currPlayer = 1;
}

void Game::switchPlayer()
{
	currPlayer = - currPlayer;
}

int Game::getPlayer()
{
	return currPlayer;
}

void Game::setPosition(int x, int y, int player)
{
	field[x][y] = player;
}

int Game::getPosition(int x, int y)
{
	return field[x][y];
}

int Game::testForWin()
{
	for (int x = 0; x < 7; x++)
	{
		for (int y = 0; y < 6; y++)
		{
			int sum;
			
			sum = getCatchedPosition(x , y) + getCatchedPosition(x+1, y) + getCatchedPosition(x+2, y) + getCatchedPosition(x+3, y);
			if(sum == 4 || sum == -4) return sum/4;

			sum = getCatchedPosition(x , y) + getCatchedPosition(x, y+1) + getCatchedPosition(x, y+2) + getCatchedPosition(x, y+3);
			if(sum == 4 || sum == -4) return sum/4;

			sum = getCatchedPosition(x , y) + getCatchedPosition(x+1, y+1) + getCatchedPosition(x+2, y+2) + getCatchedPosition(x+3, y+3);
			if(sum == 4 || sum == -4) return sum/4;

			sum = getCatchedPosition(x , y) + getCatchedPosition(x-1, y+1) + getCatchedPosition(x-2, y+2) + getCatchedPosition(x-3, y+3);
			if(sum == 4 || sum == -4) return sum/4;
		}
	}
	return 0;
}

int Game::getCatchedPosition(int x, int y)
{
	if(x < 0 || y < 0 || x > 6 || y > 5)
		return 0;
	else 
		return getPosition(x, y);
}
