#pragma once
#ifndef HEX_H
#define HEX_H

#include <vector>
#include "ship.h"

class Hex {
private:
	Ship* ship;
	bool has_ship;

public:
	Hex(int x, int z);
	const int x;
	const int z;

	Ship* get_ship();
	bool get_has_ship();
};


#endif
