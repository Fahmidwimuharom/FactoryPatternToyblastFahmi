#pragma once
#include "Tiles.h"

class ObjectFactory
{
public:
	Tiles* getTiles(string type)
	{
		if (type == "NORMAL")
		{
			return new OrdinaryTile();
		}
		else if (type == "BOMB")
		{
			return new Bomb();
		}
		else if (type == "ROCKET")
		{
			return new Rocket();
		}
		else if (type == "RUBIC")
		{
			return new Rubic();
		}
	}
};
