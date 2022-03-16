#pragma once
#include "ObjectFactory.h"
#define xlength 5
#define ylength 5

class BoardClient
{
private:
	Tiles* array[xlength][ylength];
	ObjectFactory objectfactory;
public:
	BoardClient()
	{
		for (int i = 0; i < xlength; i++)
		{
			for (int j = 0; j < ylength; j++)
			{
				if ((j + 1 + i) % 2 == 0)
				{
					array[i][j] = objectfactory.DapatkanTiles("BOM");
				}
				else {
					array[i][j] = objectfactory.DapatkanTiles("ROKCET");
				}
			}
		}
	}
	void printBoard()
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
	void use(int x, int y)
	{
		array[x][y]->use();
		array[x][y] = NULL;
	}
};




//coba2

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

//Tile* generateTiles(int x, int y, string type)
//{
//	TileFactory tilefactory;
//	Tile* tile = tilefactory.getTile(type);
//	tile->setCoord(x, y);
//	return tile;
//}