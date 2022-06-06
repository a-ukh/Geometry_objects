#ifndef FIGURE_H
#define FIGURE_H

class Figure
{
public:
	virtual ~Figure() noexcept = default;
	virtual double area() = 0;
	virtual double perimeter() = 0;
	virtual void show(const char symbol = '*') = 0;
};

#endif