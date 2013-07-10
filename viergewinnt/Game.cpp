#include "Game.h"

int i;

Game::Game(void)
{
}

int Game::choosePlayer(int newGame)
{
	
	if(newGame){
		i++;
		return i;
	} else if(i == 1){
		i--;
		return 0;
	} else if(i == 0){
		i++;
		return 1;
	}
}

int Game::setPlayer(int newGame)
{
	int choosenPlayer;

	choosenPlayer = choosePlayer(newGame);

	return choosenPlayer;
}
