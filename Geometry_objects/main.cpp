#include <iostream>
#include "header.h"

int main()
{
	Rectangle rect(3, 5);
	std::cout << rect.area() << std::endl;
	rect.show('a');

	Triangle tr(3, 4, 5);
	std::cout << tr.area() << std::endl;

	Circle cir(1);
	std::cout << cir.area() << std::endl;

	return EXIT_SUCCESS;
}