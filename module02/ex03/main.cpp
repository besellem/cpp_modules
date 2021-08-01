/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besellem <besellem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 12:38:23 by besellem          #+#    #+#             */
/*   Updated: 2021/08/01 15:31:38 by besellem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"
#include <cmath>


// float	area(Point const &a, Point const &b, Point const &c) {

// 	const float	tmp = (a.getX() * (b.getY() - c.getY()) + b.getX() * (c.getY() - a.getY()) + c.getX() * (a.getY() - b.getY())) / 2.0;
// 	return tmp < 0 ? -tmp : tmp;
// }

// bool	isInside(Point const a, Point const b, Point const c, Point const point) {
	
// 	float	_A = area(a, b, c);
// 	float	_A1 = area(point, b, c);
// 	float	_A2 = area(a, point, c);
// 	float	_A3 = area(a, b, point);

// 	return (_A == (_A1 + _A2 + _A3));
// }

int	main(void) {
	
	const Point		&a = Point(0, 0);
	const Point		&b = Point(10, 30);
	const Point		&c = Point(20, 0);
	
	const Point		&point1 = Point(10, 15);
	const Point		&point2 = Point(30, 15);

	std::cout << "a (" << a.getX() << ", " << a.getY() << ")" << std::endl;
	std::cout << "b (" << b.getX() << ", " << b.getY() << ")" << std::endl;
	std::cout << "c (" << c.getX() << ", " << c.getY() << ")" << std::endl;
	std::cout << std::endl;

	std::cout << "(" << point1.getX() << ", " << point1.getY() << ") " << "is inside the triangle ? -> " << bsp(a, b, c, point1) << std::endl;
	std::cout << "(" << point2.getX() << ", " << point2.getY() << ") " << "is inside the triangle ? -> " << bsp(a, b, c, point2) << std::endl;

	return 0;
}
