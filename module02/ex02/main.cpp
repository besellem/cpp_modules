/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besellem <besellem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 12:38:23 by besellem          #+#    #+#             */
/*   Updated: 2021/07/28 17:40:57 by besellem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	main(void) {
	
	Fixed a;
	Fixed const b(10);
	Fixed const c(42.42f);
	Fixed const d(b);

	a = Fixed(1234.4321f);
	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;
	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	std::cout << "d is " << d.toInt() << " as integer" << std::endl;

	if (b < c) {
		std::cout << "b < c" << std::endl;
	} else {
		std::cout << "b >= c" << std::endl;
	}
	
	if (Fixed(10) == b) {
		std::cout << Fixed(10) << " == " << b << std::endl;
	} else {
		std::cout << Fixed(10) << " != " << b << std::endl;
	}

	if (Fixed(42.42f) == c) {
		std::cout << Fixed(42.42f) << " == " << c << std::endl;
	} else {
		std::cout << Fixed(42.42f) << " != " << c << std::endl;
	}

	std::cout << "c before post incrementation : " << c++ << std::endl;
	std::cout << "c after post incrementation : " << c << std::endl;

	return 0;
}
