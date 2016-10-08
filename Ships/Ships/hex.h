#pragma once
#ifndef HEX_H
#define HEX_H
#include <iostream>
#include <vector>
#include "ship.h"

//Shapes represent the individual components that make up the entire game board. 
//I will probably have to add a Image of some parameter associated with a shape.
class Shape 
{
protected:
	Shape* parent;
	std::vector<Shape*> children;
	int children_num;
	Ship* ship;
	bool has_ship;
	double x, y, rotation;

public:
	Shape(Shape* parent, double x, double y, double rotation);
	Shape* get_parent();
	std::vector<Shape*> get_children();
	int get_children_num();
	Ship* get_ship();
	bool get_has_ship();
	double get_x();
	double get_y();
	double get_rotation();
};

class Trapezoid : public Shape
{
public:
	Trapezoid(Shape* parent, double x, double y, double rotation);
};

class Hex : public Shape
{
public:
	Hex(bool size_small, Shape* parent, double x, double y, double rotation);
};

#endif
