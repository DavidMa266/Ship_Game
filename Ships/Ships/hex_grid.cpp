#include "hex.h"
#include "hex_grid.h"
#include <stdlib.h>  
#include <iostream>

//Creates an initializes the hexagonal grid.
Hex_Grid::Hex_Grid(int size) : size(size)
{
	for (int i = -size; i <= size; i++) 
	{
		std::vector<Hex*> hexes;
		for (int j = -size; j <= size; j++)
		{
			if (abs(i + j) <= size) {
				Hex* hex = new Hex(j, i);
				hexes.push_back(hex);
				std::cout << j << ", " << i << std::endl;
			}
			else {
				hexes.push_back(nullptr);
			}
		}
		Hex_Grid::grid.push_back(hexes);
	}
}

Hex * Hex_Grid::find_neighbor(int x, int z, int direction)
{
	int tmp_x = x;
	int tmp_z = z;
	int dir = (direction + 6) % 6;
	switch (dir)
	{
	case(0) :
		tmp_x++;
		tmp_z--;
		break;
	case(1) :
		tmp_x++;
		break;
	case(2) :
		tmp_z++;
		break;
	case(3) :
		tmp_x--;
		tmp_z++;
		break;
	case(4) :
		tmp_x--;
		break;
	case(5) :
		tmp_z--;
		break;
	default:
		break;
	}
	std::cout << tmp_x << ", " << tmp_z << std::endl;
	if (abs(tmp_x) > size || abs(tmp_z) > size || abs(tmp_x + tmp_z) > size) 
	{
		return nullptr;
	}
	return Hex_Grid::grid.at(tmp_x + size).at(tmp_z+ size);
}
