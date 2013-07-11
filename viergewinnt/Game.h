#pragma once
class Game
{
private:
	bool currPlayer;	
public:
	Game(void);

	virtual void switchPlayer();
	virtual bool getPlayer();
};


