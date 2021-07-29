/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besellem <besellem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 12:38:23 by besellem          #+#    #+#             */
/*   Updated: 2021/07/29 17:46:48 by besellem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"
#include <cmath>


float	area(float x1, float y1, float x2, float y2, float x3, float y3) {

	const float	tmp = (x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2)) / 2.0;
	return tmp < 0 ? -tmp : tmp;
}

float	area2(Point const &a, Point const &b, Point const &c) {

	const float	tmp = (a.getX() * (b.getY() - c.getY()) + b.getX() * (c.getY() - a.getY()) + c.getX() * (a.getY() - b.getY())) / 2.0;
	return tmp < 0 ? -tmp : tmp;
}

bool	isInside(int x1, int y1, int x2, int y2, int x3, int y3, int x, int y) {
	
	const Point		a(x1, y1);
	const Point		b(x2, y2);
	const Point		c(x3, y3);
	const Point		point(x, y);

	float	A = area(x1, y1, x2, y2, x3, y3);
	float	A1 = area(x, y, x2, y2, x3, y3);
	float	A2 = area(x1, y1, x, y, x3, y3);
	float	A3 = area(x1, y1, x2, y2, x, y);

	float	_A = area2(a, b, c);
	float	_A1 = area2(point, b, c);
	float	_A2 = area2(a, point, c);
	float	_A3 = area2(a, c, point);

	bool	real = (A == (A1 + A2 + A3));
	bool	mine = (_A == (_A1 + _A2 + _A3));

	std::cout << "real : " << (real ? "True" : "False") << std::endl;
	std::cout << "    A  : " << A << std::endl;
	std::cout << "    A1 : " << A1 << std::endl;
	std::cout << "    A2 : " << A2 << std::endl;
	std::cout << "    A3 : " << A3 << std::endl;

	std::cout << "mine : " << (mine ? "True" : "False") << std::endl;
	std::cout << "    A  : " << _A << std::endl;
	std::cout << "    A1 : " << _A1 << std::endl;
	std::cout << "    A2 : " << _A2 << std::endl;
	std::cout << "    A3 : " << _A3 << std::endl;

	return (real);
}

bool	isInside2(Point const &a, Point const &b, Point const &c, Point const &point) {
	
	float	_A = area2(a, b, c);
	float	_A1 = area2(point, b, c);
	float	_A2 = area2(a, point, c);
	float	_A3 = area2(a, c, point);

	return (_A == (_A1 + _A2 + _A3));
}

int	main(void) {
	
	const Point		a(0, 0);
	const Point		b(10, 30);
	const Point		c(20, 0);
	
	const Point		point1(10, 15);
	const Point		point2(30, 15);

	std::cout << "a (" << a.getX() << ", " << a.getY() << ")" << std::endl;
	std::cout << "b (" << b.getX() << ", " << b.getY() << ")" << std::endl;
	std::cout << "c (" << c.getX() << ", " << c.getY() << ")" << std::endl;
	std::cout << std::endl;

	std::cout << "point1 (" << point1.getX() << ", " << point1.getY() << ") -> " << isInside2(a, b, c, point1) << std::endl;
	std::cout << "point2 (" << point2.getX() << ", " << point2.getY() << ") -> " << isInside2(a, b, c, point2) << std::endl;
	std::cout << std::endl;

	std::cout << "(" << point1.getX() << ", " << point1.getY() << ") " << "is inside the triangle ? -> " << bsp(a, b, c, point1) << std::endl;
	std::cout << "(" << point2.getX() << ", " << point2.getY() << ") " << "is inside the triangle ? -> " << bsp(a, b, c, point2) << std::endl;

	return 0;
}
