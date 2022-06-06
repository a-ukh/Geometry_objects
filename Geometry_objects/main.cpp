#include <iostream>
#include "Figure.h"
#include "Rectangle.h"
#include "Triangle.h"
#include "Circle.h"

int main()
{
	Rectangle rect(3, 5);
	std::cout << rect.area() << std::endl;
	rect.show();

	Triangle tr(3, 4, 5);
	std::cout << tr.area() << std::endl;

	Circle cir(1);
	std::cout << cir.area() << std::endl;

	return EXIT_SUCCESS;
}