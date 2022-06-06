#include "Rectangle.h"
#include <iostream>

Rectangle::Rectangle(const double length, const double width) : m_length(length), m_width(width) {}

double Rectangle::perimeter()
{
    return 2. * (m_length + m_width);
}

double Rectangle::area()
{
	return m_length * m_width;
}

void Rectangle::show(const char symbol)
{
    for (size_t i = 0; i < m_width; ++i) 
    {
        for (size_t j = 0; j < m_length; ++j) 
        {
            if (i == 0 || i == m_width - 1) 
                std::cout << symbol;
            else if (j == 0 || j == m_length - 1) 
                std::cout << symbol;
            else 
                std::cout << ' ';
        }
        std::cout << "\n";
    }
}