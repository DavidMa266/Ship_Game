#pragma once
#ifndef HEX_H
#define HEX_H
#include <iostream>
#include <vector>
#include "ship.h"

class Hex {
protected:
	Ship* ship;
	bool has_ship;
	int x, y;

public:
	Hex(int x, int y);
	Ship* get_ship();
	bool get_has_ship();
	int get_x();
	int get_y();
};


#endif
