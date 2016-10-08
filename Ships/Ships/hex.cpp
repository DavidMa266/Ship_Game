#include "hex.h"


Ship* Hex::get_ship()
{
	return Shape::ship;
}
bool Hex::get_has_ship()
{
	return Shape::has_ship;
}
int Hex::get_x()
{
	return Shape::x;
}
int Hex::get_y()
{
	return Shape::y;
}

Hex::Hex(int x, int y)
{
	Hex::x = x;
	Hex::y = y;
	Hex::has_ship = false;
	Hex::ship = nullptr;
}