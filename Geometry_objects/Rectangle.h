#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Figure.h"

class Rectangle : public Figure
{
private:
	double r_length;
	double r_width;

public:
	Rectangle(const double length, const double width);
	double area();
	double perimeter();
	void show();
};

#endif