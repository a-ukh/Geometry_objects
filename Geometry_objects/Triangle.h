#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "Figure.h"

class Triangle : public Figure
{
private:
	double t_a;
	double t_b;
	double t_c;

public:
	Triangle(const double a, const double b, const double c);
	double perimeter() override;
	double area() override;
	void show(const char symbol = '*') override;
};

#endif