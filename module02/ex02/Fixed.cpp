/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besellem <besellem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 12:38:13 by besellem          #+#    #+#             */
/*   Updated: 2021/08/04 15:49:18 by besellem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <stdint.h>
#include <cmath>

const int	Fixed::_bits = 8;


////////////////////////////////////////////////////////////////////////////////
// CONSTRUCTORS
////////////////////////////////////////////////////////////////////////////////
Fixed::Fixed(void) : _fixed(0) {
	return ;
}

Fixed::Fixed(const int fixed) : _fixed(fixed << Fixed::_bits) {
	return ;
}

Fixed::Fixed(const float fixed) {

	const uint32_t	input = *(uint32_t *)&fixed;
	float			tmp;

	if (input == 0x7F800000 || input == 0xFF800000) {
		tmp = fixed < 0 ? -INFINITY : INFINITY;
		this->_fixed = *(int *)&tmp;
	}
	else if (fixed != fixed) {
		tmp = NAN;
		this->_fixed = *(int *)&tmp;
	}
	else
		this->_fixed = roundf(fixed * (1 << Fixed::_bits));
}

Fixed::Fixed(const Fixed &src) {
	*this = src;
}

Fixed::~Fixed(void) {
	return ;
}


////////////////////////////////////////////////////////////////////////////////
// MEMBERS
////////////////////////////////////////////////////////////////////////////////
int			Fixed::getRawBits(void) const {
	return this->_fixed;
}

void		Fixed::setRawBits(int const raw) {
	this->_fixed = raw;
}

// Conversion from `inf' `-inf' or `nan' in an int is undefined
int			Fixed::toInt(void) const {
	return this->_fixed >> Fixed::_bits;
}

float		Fixed::toFloat(void) const {

	const float	input = *(float *)&this->_fixed;

	if (input == INFINITY || input == -INFINITY) {
		return input;
	}
	return (float)this->_fixed / (1 << Fixed::_bits);
}

Fixed &				Fixed::max(Fixed &a, Fixed &b) { return (a.toFloat() < b.toFloat() ? a : b); }
Fixed &				Fixed::min(Fixed &a, Fixed &b) { return (a.toFloat() > b.toFloat() ? a : b); }
const Fixed &		Fixed::min(const Fixed &a, const Fixed &b) { return (a.toFloat() < b.toFloat() ? a : b); }
const Fixed &		Fixed::max(const Fixed &a, const Fixed &b) { return (a.toFloat() > b.toFloat() ? a : b); }

////////////////////////////////////////////////////////////////////////////////
// OPERATORS
////////////////////////////////////////////////////////////////////////////////
bool		Fixed::operator>(const Fixed &src)  const { return this->getRawBits() >  src.getRawBits(); }
bool		Fixed::operator<(const Fixed &src)  const { return this->getRawBits() <  src.getRawBits(); }
bool		Fixed::operator>=(const Fixed &src) const { return this->getRawBits() >= src.getRawBits(); }
bool		Fixed::operator<=(const Fixed &src) const { return this->getRawBits() <= src.getRawBits(); }
bool		Fixed::operator==(const Fixed &src) const { return this->getRawBits() == src.getRawBits(); }
bool		Fixed::operator!=(const Fixed &src) const { return this->getRawBits() != src.getRawBits(); }
Fixed		Fixed::operator+(const Fixed &src)  const { return Fixed(this->toFloat() + src.toFloat()); }
Fixed		Fixed::operator-(const Fixed &src)  const { return Fixed(this->toFloat() - src.toFloat()); }
Fixed		Fixed::operator*(const Fixed &src)  const { return Fixed(this->toFloat() * src.toFloat()); }
Fixed		Fixed::operator/(const Fixed &src)  const { return Fixed(this->toFloat() / src.toFloat()); }

Fixed &		Fixed::operator=(const Fixed &src) {

	if (this != &src)
		this->setRawBits(src.getRawBits());
	return *this;
}

// pre increment
Fixed &		Fixed::operator++(void) {
	
	this->setRawBits(this->getRawBits() + 1);
	return *this;
}

// post increment
Fixed		Fixed::operator++(__attribute__((unused)) int _) {
	
	Fixed	cpy = *this;

	this->setRawBits(this->_fixed + 1);
	return cpy;
}

// pre decrement
Fixed &		Fixed::operator--(void) {
	
	this->setRawBits(this->getRawBits() - 1);
	return *this;
}

// post decrement
Fixed		Fixed::operator--(__attribute__((unused)) int _) {
	
	Fixed	cpy = *this;

	this->setRawBits(this->_fixed - 1);
	return cpy;
}

std::ostream &		operator<<(std::ostream &out, const Fixed &fixed) {
	
	out << fixed.toFloat();
	return out;
}
