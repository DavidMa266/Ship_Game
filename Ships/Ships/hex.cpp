#include "hex.h"

Hex::Hex(int x, int z) : x(x), z(z)
{
	Hex::has_ship = false;
	Hex::ship = nullptr;
}
Ship* Hex::get_ship()
{
	return Hex::ship;
}
bool Hex::get_has_ship()
{
	return Hex::has_ship;
}
