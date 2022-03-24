#pragma once
#include <iostream>

using namespace std;

class Tile {
private :
	int coord[2];
public:
	virtual void draw() = 0;
	virtual void use() = 0;
	void setCoord(int x, int y);
	void showCoord();
};

class NormalTile : public Tile {
public :
	void draw();
	void use();
};

class BombTile : public Tile {
public:
	void draw();
	void use();
};

class DynamiteTile : public Tile {
public:
	void draw();
	void use();
};

class RubickTile : public Tile {
public:
	void draw();
	void use();
};
