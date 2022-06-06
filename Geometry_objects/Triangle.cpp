#include "Triangle.h"
#include <iostream>

Triangle::Triangle(const double a, const double b, const double c) : m_a(a), m_b(b), m_c(c) {}

//проверка треугольника на существование
bool Triangle::isTriangle()
{
	if ((m_a + m_b > m_c) && (m_a + m_c > m_b) && (m_b + m_c > m_a))
		return 1;
	else
		return 0;
}

//проверка треугольника на равнобедренность
//возвращаемое значение определяет, какие стороны равны
//от этого затем зависит вывод равнобедренного треугольника на экран
int Triangle::isIsosceles()
{
	if (m_a == m_b)
		return 1;
	else if (m_a == m_c)
		return 2;
	else if (m_b == m_c)
		return 3;
	else 
		return 0;
}

double Triangle::perimeter()
{
	return m_a + m_b + m_c;
}

double Triangle::area()
{
	const double p = perimeter() * 0.5;
	return std::sqrt(p * (p - m_a) * (p - m_b) * (p - m_c));
}

void Triangle::show(const char symbol) 
{ 
	const int x = isIsosceles();
	int temp = 0;

	if (x == 1)
		temp = m_c / 2 + 1;
	else if (x == 2)
		temp = m_b / 2 + 1;
	else if (x == 3)
		temp = m_a / 2 + 1;

	for (int i = 1; i <= temp; ++i) 
	{
		for (int j = 1; j <= temp - i; ++j) 
			std::cout << ' ';

		for (int j = 1; j < i * 2; ++j) 
			std::cout << symbol;

		std::cout << '\n';
	}

}
