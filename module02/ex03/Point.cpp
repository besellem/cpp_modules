/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besellem <besellem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 14:39:17 by besellem          #+#    #+#             */
/*   Updated: 2021/07/29 17:00:32 by besellem         ###   ########.fr       */
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

	if (this == &ref)
		return *this;
	return *this;
}
