#pragma once
#include <iostream>

using namespace std;

class Tiles {
private:
	int coordinate[2];
public:
	virtual ~Tiles() = default;
	virtual void draw() = 0;
	virtual void use() = 0;
	void setCoordinate(int x, int y)
	{
		coordinate[0] = x;
		coordinate[1] = y;
	}
	void showCoordinate()
	{
		cout << "[" << coordinate[0] << "," << coordinate[1] << "]";
	}
};

class Rocket : public Tiles {
public:
	void draw()
	{
		cout << "ROC";
	}
	void use()
	{
		cout << "Rocket Aktif "; 
		showCoordinate(); 
		cout << " Meledak";
	}
};

class OrdinaryTile : public Tiles {
public:
	void draw()
	{
		cout << "ORD";
	}
	void use() {};
};


class Rubic : public Tiles {
public:
	void draw()
	{
		cout << "RUB";
	}
	void use()
	{
		cout << "Rubick Aktif "; 
		showCoordinate(); 
		cout << " Aktif ";
	}
};


class Bomb : public Tiles {
public:
	void draw()
	{
		cout << "BOM";
	}
	void use()
	{
		cout << "Bomb Aktif "; 
		showCoordinate(); 
		cout << " Meledak ";
	}
};
