#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Figure.h"

class Rectangle : public Figure
{
	double m_length;
	double m_width;

public:
	Rectangle(const double length, const double width);
	double area() override;
	double perimeter() override;
	void show(const char symbol = '*') override;
};

#endif