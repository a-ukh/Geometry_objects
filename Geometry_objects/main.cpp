#include "header.h"
#include <iostream>

int main()
{
	Rectangle rect(3, 5);
	std::cout << rect.area() << std::endl;
	rect.show('a');

	Triangle tr(4, 4, 6);
	if (tr.isTriangle())
	{
		std::cout << tr.area() << std::endl;
		tr.show();
	}
	else
		std::cout << "Such triangle does not exist!\n";

	Circle cir(10);
	std::cout << cir.area() << std::endl;
	cir.show('a');

	Polygon p(2., 5);
	std::cout << p.area() << std::endl;

	return EXIT_SUCCESS;
}