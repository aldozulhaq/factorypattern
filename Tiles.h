#pragma once
#include <iostream>

using namespace std;

class Tile {
private :
	int coord[2];
public:
	virtual ~Tile() = default;
	virtual void draw() = 0;
	virtual void use() = 0;
	void setCoord(int x, int y)
	{
		coord[0] = x;
		coord[1] = y;
	}
	void showCoord()
	{
		cout << coord[0] << coord[1];
	}
};

class NormalTile : public Tile {
public :
	void draw()
	{
		cout << "N";
	}
	void use(){};
};

class BombTile : public Tile {
public:
	void draw()
	{
		cout << "B";
	}
	void use()
	{
		cout << "Bomb Explode";
	}
};

class DynamiteTile : public Tile {
public:
	void draw()
	{
		cout << "D";
	}
	void use()
	{
		cout << "Dynamite Explode";
	}
};

class RubickTile : public Tile {
public:
	void draw()
	{
		cout << "R";
	}
	void use(){};
};