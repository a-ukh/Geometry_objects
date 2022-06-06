#include <iostream>
#include "header.h"

int main()
{
	Rectangle rect(3, 5);
	std::cout << rect.area() << std::endl;
	rect.show('a');

	Triangle tr(4, 4, 5);
	if (tr.isTriangle())
	{
		std::cout << tr.area() << std::endl;
		tr.show();
	}
	else
		std::cout << "Such triangle does not exist!\n";

	Circle cir(6);
	std::cout << cir.area() << std::endl;
	cir.show();

	Polygon p(2., 5);
	std::cout << p.area() << std::endl;

	return EXIT_SUCCESS;
}