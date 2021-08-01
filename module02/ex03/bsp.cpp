/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besellem <besellem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 14:45:20 by besellem          #+#    #+#             */
/*   Updated: 2021/08/01 15:58:38 by besellem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

// i'm not a math teacher
float	area(Point p1, Point p2, Point p3) {
	return (p2.getX() - p1.getX()) * (p3.getY() - p1.getY()) - (p2.getY() - p1.getY()) * (p3.getX() - p1.getX());
}

bool	bsp(Point const a, Point const b, Point const c, Point const point) {
	if (area(a, b, c) < 0)
		return bsp(a, c, b, point);
	if (area(a, b, point) > 0 && area(b, c, point) > 0 && area(c, a, point) > 0)
		return (true);
	return (false);
}
