#include "hex.h"


Shape*  Shape::get_parent()
{
	return Shape::parent;
}
std::vector<Shape*> Shape::get_children()
{
	return Shape::children;
}
int Shape::get_children_num()
{
	return Shape::children_num;
}
Ship* Shape::get_ship()
{
	return Shape::ship;
}
bool Shape::get_has_ship()
{
	return Shape::has_ship;
}
double Shape::get_x()
{
	return Shape::x;
}
double Shape::get_y()
{
	return Shape::y;
}
double Shape::get_rotation()
{
	return Shape::rotation;
}

//Generic Shape constructor. Initializes all starting values.
Shape::Shape(Shape* parent, double x, double y, double rotation)
{
	Shape::parent = parent;
	Shape::x = x;
	Shape::y = y;
	Shape::rotation = rotation;
	Shape::has_ship = false;
	Shape::ship = nullptr;
	Shape::children_num = 0;
	Shape::children;
}

//Currently nothing is being done to Trapezoids, but I expect I may need to add 'neighbor' nodes and such.
//That and the image projected will be the main difference between Trapezoids and Hexagonal nodes.
//This gives me freedom to choose between pinpoint targetting and 'hit everything in a range' for firing.
Trapezoid::Trapezoid(Shape * parent, double x, double y, double rotation) : Shape(parent, x, y, rotation)
{
}
Hex::Hex(bool size_small, Shape* parent, double x, double y, double rotation) : Shape(parent, x, y, rotation)
{
	if (size_small) 
	{
	}
	else 
	{
		Hex::children_num = 7;
		std::vector<Shape*> children;
		Hex* h_child = new Hex(true, this, x, y, rotation);
		children.push_back(h_child);
		
		for (int i = 0; i < 6; i++) {
			Trapezoid* t_child = new Trapezoid(this, x, y, rotation);
			children.push_back(t_child);
		}
		Hex::children = children;
	}
}