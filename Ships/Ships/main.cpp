#include <stdio.h>
#include "hex.h";

int main() 
{
	Hex* x = new Hex(false, nullptr, 20.5, 30.2, -10.3);
	std::cout << x->get_x() << "\n" << x->get_y() <<std::endl;

	Hex* z = new Hex(false, nullptr, 10.3, -1.7, -10.3);

	std::cout << x->get_x() << "\n" << x->get_y() <<std::endl;
	std::cout << z->get_x() << "\n" << z->get_y()<< std::endl;
	return 0;
}