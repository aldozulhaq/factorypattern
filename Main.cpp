#include "Board.h"

int main()
{
	int x, y;
	Board board;
	char option = 'y';

	board.printBoard();

	while (option != 'n')
	{
		cout << endl << "Use Tile on Coordinate : ";
		cout << endl << "[X] : "; cin >> x;
		cout << "[Y] : "; cin >> y;
		board.use(x,y);
		cout << endl;
		board.printBoard();
		cout << endl;
		cout << "Again ?"; cin >> option;
	}
}
