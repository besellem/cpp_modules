/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besellem <besellem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 14:38:45 by besellem          #+#    #+#             */
/*   Updated: 2021/07/29 16:31:50 by besellem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class Point {
	
	public:
		Point(void);
		Point(const int x, const int y);
		Point(const Point &ref);
		~Point(void);
		
		Point &			operator=(const Point &ref);
	
		float			getX(void) const;
		float			getY(void) const;

	private:
		Fixed const		_x;
		Fixed const		_y;
	
};

bool	bsp(Point const a, Point const b, Point const c, Point const point);

#endif
