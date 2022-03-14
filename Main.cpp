#include "TileFactory.h"
#include<array> 
#define xlength 5
#define ylength 5
//string randomType()
//{
//	string type[4] = { "NORMAL", "BOMB", "DYNAMITE", "RUBICK" };
//	srand(time(0));
//	int RandIndex = rand() % 4;
//	return type[RandIndex];
//}

//void generateRandomTiles(int x, int y, int z)
//{
//	string type[4] = { "NORMAL", "BOMB", "DYNAMITE", "RUBICK" };
//	TileFactory tilefactory;
//	Tile* tile = tilefactory.getTile(type[z]);
//	tile->draw();
//	tile->setCoord(x, y);
//}

Tile* generateTiles(int x, int y, string type)
{
	TileFactory tilefactory;
	Tile* tile = tilefactory.getTile(type);
	tile->setCoord(x, y);
	return tile;
}

void printArrayofTile(Tile* tar[xlength][ylength])
{
	for (int i = 0; i < xlength; i++)
	{
		cout << "| ";
		for (int j = 0; j < ylength; j++)
		{
			if (tar[i][j] != NULL)
				tar[i][j]->draw();
			cout << " | ";
		}
		cout << endl;
	}
}

int main()
{
	int x, y;
	Tile* board[xlength][ylength];
	srand(time(0));
	char option = 'y';

	for (int i = 0; i < xlength; i++)
	{
		cout << "| ";
		for (int j = 0; j < ylength; j++)
		{
			//board[i - 1][j] = generateTiles();
			if ((j + 1 + i) % 2 == 0)
			{
				board[i][j] = generateTiles(i - 1, j, "BOMB");
			} else {
				board[i][j] = generateTiles(i - 1, j, "DYNAMITE");
			}
			board[i][j]->draw();
			//generateRandomTiles(i - 1, j, rand() % 4);
			cout << " | ";
		}
		cout << endl;
	}

	while (option != 'n')
	{
		cout << endl << "Use Tile on Coordinate : ";
		cout << endl << "[X] : "; cin >> x;
		cout << "[Y] : "; cin >> y;
		board[x][y]->use();
		board[x][y] = NULL;
		cout << endl;
		printArrayofTile(board);
		cout << endl;
		cout << "Again ?"; cin >> option;
	}
}