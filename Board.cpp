#include "Board.h"

Board::Board()
{
	for (int i = 0; i < xlength; i++)
	{
		for (int j = 0; j < ylength; j++)
		{
			if ((j + 1 + i) % 2 == 0)
			{
				array[i][j] = tilefactory.getTile("BOMB");
			}
			else {
				array[i][j] = tilefactory.getTile("DYNAMITE");
			}
		}
	}
}

void Board::printBoard()
{
	for (int i = 0; i < xlength; i++)
	{
		cout << "| ";
		for (int j = 0; j < ylength; j++)
		{
			if (array[i][j] != NULL)
				array[i][j]->draw();
			cout << " | ";
		}
		cout << endl;
	}
}

void Board::use(int x, int y)
{
	array[x][y]->use();
	array[x][y] = NULL;
}