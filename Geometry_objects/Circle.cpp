#include "Circle.h"
#define _USE_MATH_DEFINES
#include <cmath>

Circle::Circle(const double radius) : c_radius(radius) {}

double Circle::perimeter()
{
	return 2. * M_PI * c_radius;
}

double Circle::area()
{
	return M_PI * c_radius * c_radius;
}

void Circle::show() { }