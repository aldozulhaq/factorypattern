#pragma once
#include "Tiles.h"

class TileFactory
{
public :
	Tile * getTile(string type)
	{
		if (type == "NORMAL")
		{
			return new NormalTile();
		}
		else if (type == "BOMB")
		{
			return new BombTile();
		}
		else if (type == "DYNAMITE")
		{
			return new DynamiteTile();
		}
		else if (type == "RUBICK")
		{
			return new RubickTile();
		}
	}
};