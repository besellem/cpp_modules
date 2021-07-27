/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besellem <besellem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 12:38:13 by besellem          #+#    #+#             */
/*   Updated: 2021/07/27 15:53:14 by besellem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

const int	Fixed::_bits = 8;

Fixed::Fixed(void) : _fixed(0) {
	
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int fixed) {
	
	float	tmp = fixed;
	this->_fixed = *(int *)&tmp;

	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float fixed) : _fixed(*(int *)&fixed) {
	
	std::cout << "Float constructor called" << std::endl;
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

	return this->_fixed;
}

void		Fixed::setRawBits(int const raw) {
	this->_fixed = raw;
}

int			Fixed::toInt(void) const {
	return *(float *)&this->_fixed;
}

float		Fixed::toFloat(void) const {
	return *(float *)&this->_fixed;
}


std::ostream &		operator<<(std::ostream &out, const Fixed &fixed) {
	
	out << fixed.toFloat();
	return out;
}
