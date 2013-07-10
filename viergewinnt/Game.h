#pragma once
class Game
{
private:
	virtual int choosePlayer(int newGame);
	
public:
	Game(void);
	virtual int setPlayer(int newGame);
};


