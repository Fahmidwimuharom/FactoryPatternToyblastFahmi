#pragma once
#include "ObjectFactory.h"
#define panjangx 6
#define panjangy 6

class BoardClient
{
private:
	Tiles* array[panjangx][panjangy];
	ObjectFactory objectfactory;
public:
	BoardClient()
	{
		for (int i = 0; i < panjangx; i++)
		{
			for (int j = 0; j < panjangy; j++)
			{
				if ((j + 1 + i) % 2 == 0)
				{
					array[i][j] = objectfactory.getTiles("BOMB");
				}
				else {
					array[i][j] = objectfactory.getTiles("ROCKET");
				}
			}
		}
	}
	void printBoard()
	{
		for (int i = 0; i < panjangx; i++)
		{
			cout << "| ";
			for (int j = 0; j < panjangy; j++)
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
