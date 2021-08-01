/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besellem <besellem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 12:38:23 by besellem          #+#    #+#             */
/*   Updated: 2021/07/29 14:33:47 by besellem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iomanip>
#include <cmath>

int	main(void) {
	
	Fixed a;
	Fixed const b(10);
	Fixed const c(42.42f);
	Fixed const d(b);

	std::cout << "a before assignation : " << a << std::endl;
	a = Fixed(1234.4321f);
	std::cout << "a after assignation :  " << a << std::endl;
	std::cout << std::endl;

	std::cout << "a :       " << a << std::endl;
	std::cout << "a (int) : " << a.toInt() << std::endl;
	std::cout << "b :       " << b << std::endl;
	std::cout << "a (int) : " << b.toInt() << std::endl;
	std::cout << "c :       " << c << std::endl;
	std::cout << "a (int) : " << c.toInt() << std::endl;
	std::cout << "d :       " << d << std::endl;
	std::cout << "a (int) : " << d.toInt() << std::endl;
	std::cout << std::endl;

	std::cout << b << " <  " << c << " : " << (b < c) << std::endl;
	std::cout << b << " <= " << c << " : " << (b <= c) << std::endl;
	std::cout << b << " >  " << c << " : " << (b > c) << std::endl;
	std::cout << b << " >= " << c << " : " << (b >= c) << std::endl;
	std::cout << Fixed(c) << " <= " << c << " : " << (Fixed(c) <= c) << std::endl;
	std::cout << Fixed(c) << " >= " << c << " : " << (Fixed(c) >= c) << std::endl;
	std::cout << Fixed(10) << " == " << b << " : " << (Fixed(10) == b) << std::endl;
	std::cout << Fixed(10) << " != " << b << " : " << (Fixed(10) != b) << std::endl;
	std::cout << Fixed(10.01f) << " == " << b << " : " << (Fixed(10.01f) == b) << std::endl;
	std::cout << Fixed(10.01f) << " != " << b << " : " << (Fixed(10.01f) != b) << std::endl;
	std::cout << std::endl;

	std::cout << c << " + " << Fixed(-34.45f) << " : " << (c + Fixed(-34.45f)) << std::endl;
	std::cout << c << " - " << Fixed(-34.45f) << " : " << (c - Fixed(-34.45f)) << std::endl;
	std::cout << c << " * " << Fixed(2) << " : " << (c * Fixed(2)) << std::endl;
	std::cout << c << " / " << Fixed(2) << " : " << (c / Fixed(2)) << std::endl;
	std::cout << c << " / " << Fixed(0) << " : " << (c / Fixed(0)) << std::endl;
	std::cout << c << " / " << Fixed(NAN) << " : " << (c / Fixed(NAN)) << std::endl;
	std::cout << std::endl;

	a = Fixed(0.f);
	std::cout << "a before post incrementation : " << a++ << std::endl;
	std::cout << "a after post incrementation :  " << a << std::endl;
	std::cout << "a after pre incrementation :   " << ++a << std::endl;
	std::cout << "a after pre decrementation :   " << --a << std::endl;
	std::cout << "a before post decrementation : " << a-- << std::endl;
	std::cout << "a after post decrementation :  " << a << std::endl;
	std::cout << std::endl;

	std::cout << "min(" << c << ", " << b << ") : " << Fixed::min(c, b) << std::endl;
	std::cout << "max(" << c << ", " << b << ") : " << Fixed::max(c, b) << std::endl;
	std::cout << "max(" << -INFINITY << ", " << INFINITY << ") : " << Fixed::min(-INFINITY, INFINITY) << std::endl;
	std::cout << "max(" << -INFINITY << ", " << INFINITY << ") : " << Fixed::max(-INFINITY, INFINITY) << std::endl;		std::cout << std::endl;

	return 0;
}
