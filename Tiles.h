#pragma once
#include <iostream>

using namespace std;

class Tiles
{
private:
	int Coordinate[2];

public:
	virtual ~Tiles() = default;
	virtual void use() = 0;
	virtual void draw() = 0;
	void setCoordinate(int x, int y)
	{
		Coordinate[0] = x;
		Coordinate[1] = y;
	}

	void showCoordinate()
	{
		cout << "[" << Coordinate[0] << "," << Coordinate[1] << "]";

	}
};

class Rubik : public Tiles
{
public:
	void draw()
	{
		cout << "RUB";
	}

	void use()
	{
		cout << " Rubik aktif ";
		showCoordinate;
		cout << " Aktif";
	}

};

class Rokcet : public Tiles
{
public:
	void draw()
	{
		cout << "ROKCET";
	}

	void use()
	{
		cout << " Rokcet aktif ";
		showCoordinate;
		cout << " Aktif";
	}
};

class OrdinaryTiles :public Tiles
{
	void draw()
	{
		cout << "ORD";
	}

	void use()
	{	}
};

class Bom : public Tiles
{
public:

	void draw()
	{
		cout << "BOM";
	}

	void use()
	{
		cout << " Bom aktif ";
		showCoordinate;
		cout << " Aktif";
	}
};