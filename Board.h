#pragma once
#include "TileFactory.h"
#define xlength 5
#define ylength 5

class Board
{
private:
	Tile* array[xlength][ylength];
	TileFactory tilefactory;
public:
	Board();
	void printBoard();
	void use(int x, int y);
};
