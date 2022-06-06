#include <iostream>
#include "Triangle.h"

Triangle::Triangle(const double a, const double b, const double c) : t_a(a), t_b(b), t_c(c) {}

double Triangle::perimeter()
{
	return t_a + t_b + t_c;
}

double Triangle::area()
{
	const double p = perimeter() * 0.5;
	return std::sqrt(p * (p - t_a) * (p - t_b) * (p - t_c));
}

void Triangle::show() { }
