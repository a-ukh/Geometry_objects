#ifndef CIRCLE_H
#define CIRCLE_H

#include "Figure.h"

class Circle : public Figure
{
private:
	double c_radius;

public:
	Circle(const double radius);
	double perimeter() override;
	double area() override;
	void show(const char symbol = '*') override;
};

#endif