/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besellem <besellem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 14:39:17 by besellem          #+#    #+#             */
/*   Updated: 2021/08/01 15:28:53 by besellem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void) : _x(Fixed(0)), _y(Fixed(0)) {
	return ;
}

Point::Point(const int x, const int y) : _x(Fixed(x)), _y(Fixed(y)) {
	return ;
}

Point::Point(const Point &ref) {
	*this = ref;
}

Point::~Point(void) {
	return ;
}

float		Point::getX(void) const { return this->_x.toFloat(); }
float		Point::getY(void) const { return this->_y.toFloat(); }

/////////////////
// DOES NOT WORK
/////////////////
Point &			Point::operator=(const Point &ref) {

	Fixed	*x = (Fixed *)&this->_x;
	Fixed	*y = (Fixed *)&this->_y;

	if (this == &ref)
		return *this;

	*x = ref._x;
	*y = ref._y;

	return *this;
}
