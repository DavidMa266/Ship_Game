#pragma once
#include <vector>
#include "hex.h"

class Hex_Grid 
{
private:
	std::vector<std::vector<Hex* >> grid;

public:
	Hex_Grid(int size);
	const int size;

	Hex* find_neighbor(int x, int z, int direction);
};