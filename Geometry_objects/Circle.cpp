#include "Circle.h"
#include <numbers>
#include <math.h>
#include <iostream>


Circle::Circle(const double radius) : m_radius(radius) {}

double Circle::perimeter()
{
	return 2. * std::numbers::pi * m_radius;
}

double Circle::area()
{
	return std::numbers::pi * m_radius * m_radius;
}

void Circle::show(const char symbol) { }