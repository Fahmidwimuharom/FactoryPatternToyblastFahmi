#pragma once
#include "Tiles.h"

class ObjectFactory
{
public:
	Tiles* DapatkanTiles(string type)
	{
		if (type == " Rubik")
		{
			return
				new Rubik();
		}

		else if (type == " Rokcet")
		{
			return
				new Rokcet();
		}

		else if (type == " Ordinary")
		{
			return
				new OrdinaryTiles();
		}

		if (type == " Bom")
		{
			return
				new Bom();
		}
	}
};