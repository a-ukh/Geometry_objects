#include "Polygon.h"
#include <iostream>
#include <numbers>

Polygon::Polygon(const double r, const int n)
{
	m_r = r;
	m_n = n;

	const double step = 2. * std::numbers::pi / n;
	for (size_t i = 0; i < n; ++i) 
	{
		m_vertices.emplace_back(std::vector<double>{ r * sin(step * i), r * cos(step * i) }); 
	}
}

double Polygon::perimeter()
{
	return 2. * m_r * m_n * std::tan(std::numbers::pi / m_n);
}

double Polygon::area()
{
	return m_r * m_r * m_n * std::tan(std::numbers::pi / m_n);
}

void Polygon::show(const char symbol) { }