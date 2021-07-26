/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besellem <besellem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 12:38:13 by besellem          #+#    #+#             */
/*   Updated: 2021/07/26 13:16:42 by besellem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : _fixed(0) {
	
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &src) {

	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::~Fixed(void) {

	std::cout << "Destructor called" << std::endl;
}


Fixed &		Fixed::operator=(const Fixed &src) {
	
	std::cout << "Assignation operator called" << std::endl;
	this->setRawBits(src.getRawBits());

	return *this;
}

int			Fixed::getRawBits(void) const {

	std::cout << "getRawBits member function called" << std::endl;
	return this->_fixed;
}

void		Fixed::setRawBits(int const raw) {
	this->_fixed = raw;
}

const int	Fixed::_bits = 8;
