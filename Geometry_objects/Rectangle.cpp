#include "Rectangle.h"
#include <iostream>

Rectangle::Rectangle(const double length, const double width) : r_length(length), r_width(width) {}

double Rectangle::perimeter()
{
    return 2. * r_length + 2. * r_width;
}

double Rectangle::area()
{
	return r_length * r_width;
}

void Rectangle::show(const char symbol)
{
    for (size_t i = 0; i < r_width; ++i) 
    {
        for (size_t j = 0; j < r_length; ++j) 
        {
            if (i == 0 || i == r_width - 1) 
                std::cout << symbol;
            else if (j == 0 || j == r_length - 1) 
                std::cout << symbol;
            else 
                std::cout << " ";
        }
        std::cout << std::endl;
    }
}