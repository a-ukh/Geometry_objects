#ifndef POLYGON_H
#define POLYGON_H

#include "Figure.h"
#include <vector>

class Polygon : public Figure
{
	double m_r;
	int m_n;
	std::vector<std::vector<double>> m_vertices;

public:
	Polygon(const double r, const int nodes);
	double perimeter() override;
	double area() override;
	void show(const char symbol = '*') override;
};

#endif