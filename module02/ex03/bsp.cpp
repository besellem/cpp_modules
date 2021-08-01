/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besellem <besellem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 14:45:20 by besellem          #+#    #+#             */
/*   Updated: 2021/07/29 17:36:59 by besellem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

static float	sign(Point const &p1, Point const &p2, Point const &p3) {
	return (p1.getX() - p3.getX()) * (p2.getY() - p3.getY()) - \
			(p2.getX() - p3.getX()) * (p1.getY() - p3.getY());
}

// i'm not a math teacher
bool	bsp(Point const a, Point const b, Point const c, Point const point) {
	
	float	d1 = sign(point, a, b);
	float	d2 = sign(point, b, c);
	float	d3 = sign(point, c, a);
	bool	has_neg = (d1 < 0) || (d2 < 0) || (d3 < 0);
	bool	has_pos = (d1 > 0) || (d2 > 0) || (d3 > 0);

	return !(has_neg && has_pos);
}