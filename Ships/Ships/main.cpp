#include <stdio.h>
#include "hex.h";
#include "hex_grid.h"

int main() 
{
	Hex_Grid x = Hex_Grid(3);
	Hex* y = x.find_neighbor(-2, 2, -4);

	return 0;
}