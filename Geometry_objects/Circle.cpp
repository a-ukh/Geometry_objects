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

void Circle::show(const char symbol) 
{ 
    for (int y = -m_radius; y <= m_radius; ++y)
    {
        for (int x = -m_radius; x <= m_radius; ++x)
        {
            if ((int)std::sqrt(x * x + y * y) == m_radius)
                std::cout << symbol;
 
            else 
                std::cout << ' ';
        }
        std::cout << "\n";
    }
}