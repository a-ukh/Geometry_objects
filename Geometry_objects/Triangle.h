#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "Figure.h"

class Triangle : public Figure
{
	double m_a;
	double m_b;
	double m_c;

public:
	Triangle(const double a, const double b, const double c);
	bool isTriangle();
	int isIsosceles();
	double perimeter() override;
	double area() override;
	void show(const char symbol = '*') override;
};

#endif