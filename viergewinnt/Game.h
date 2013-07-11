#pragma once
class Game
{
private:
	int field[7][6];
	int currPlayer;	

private:
	virtual int getCatchedPosition(int x, int y);

public:
	Game(void);

	virtual void switchPlayer();
	virtual int getPlayer();
	virtual void setPosition(int x, int y, int player);
	virtual int getPosition(int x, int y);
	virtual int testForWin(void);
};


