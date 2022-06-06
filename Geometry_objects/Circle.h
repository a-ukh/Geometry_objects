#ifndef CIRCLE_H
#define CIRCLE_H

#include "Figure.h"

class Circle : public Figure
{
private:
	double c_radius;

public:
	Circle(const double radius);
	double perimeter();
	double area();
	void show();
};

#endif