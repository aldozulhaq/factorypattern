#include "Tiles.h"

void Tile::setCoord(int x, int y)
{
	coord[0] = x;
	coord[1] = y;
}

void Tile::showCoord()
{
	cout << "[" << coord[0] << "," << coord[1] << "]";
}

void NormalTile::draw()
{
	cout << "N";
}

void NormalTile::use()
{
	cout << "Tile on "; showCoord(); cout << " Activated";
}

void BombTile::draw()
{
	cout << "B";
}

void BombTile::use()
{
	cout << "Bomb on "; showCoord(); cout << " Explode";
}

void DynamiteTile::draw()
{
	cout << "D";
}

void DynamiteTile::use()
{
	cout << "Dynamite on "; showCoord(); cout << " Explode";
}

void RubickTile::draw()
{
	cout << "R";
}

void RubickTile::use()
{
	cout << "Rubick on "; showCoord(); cout << " Activated";
}