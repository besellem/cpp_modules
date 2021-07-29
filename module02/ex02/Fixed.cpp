/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besellem <besellem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 12:38:13 by besellem          #+#    #+#             */
/*   Updated: 2021/07/29 11:58:47 by besellem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
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

	uint32_t	input = *(uint32_t *)&fixed;

	if (input == 0x7F800000 || input == 0xFF800000) {
		this->_fixed = fixed < 0 ? -INFINITY : INFINITY;
		std::cout << " == === == == == == HEREEEEEEE\n";
	}
	else if (fixed != fixed) {
		this->_fixed = fixed < 0 ? -NAN : NAN;
		std::cout << " == === == == == == HEREEEEEEE 2\n";
	}
	else
		this->_fixed = roundf(fixed * (1 << Fixed::_bits));
	std::cout << "--> " << this->toFloat() << std::endl;
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

int			Fixed::toInt(void) const {

	if (this->_fixed == INFINITY || this->_fixed == -INFINITY || this->_fixed == NAN) {
		std::cout << " == === == == == == HEREEEEEEE 2\n";
		return this->_fixed;
	}
	return this->_fixed >> Fixed::_bits;
}

float		Fixed::toFloat(void) const {

	// std::cout << this->_fixed << "\n";

	if (this->_fixed == INFINITY || this->_fixed == -INFINITY || this->_fixed == NAN) {
		std::cout << " == === == == == == HEREEEEEEE 2\n";
		return this->_fixed;
	}
	return (float)this->_fixed / (1 << Fixed::_bits);
}

const Fixed &		Fixed::min(const Fixed &a, const Fixed &b) {
	return (a.toFloat() < b.toFloat() ? a : b);
}

const Fixed &		Fixed::max(const Fixed &a, const Fixed &b) {
	return (a.toFloat() > b.toFloat() ? a : b);
}


////////////////////////////////////////////////////////////////////////////////
// OPERATORS
////////////////////////////////////////////////////////////////////////////////
Fixed &		Fixed::operator=(const Fixed &src) {

	if (this != &src)
		this->setRawBits(src.getRawBits());
	return *this;
}

bool		Fixed::operator>(const Fixed &src)  const { return this->getRawBits() >  src.getRawBits(); }
bool		Fixed::operator<(const Fixed &src)  const { return this->getRawBits() <  src.getRawBits(); }
bool		Fixed::operator>=(const Fixed &src) const { return this->getRawBits() >= src.getRawBits(); }
bool		Fixed::operator<=(const Fixed &src) const { return this->getRawBits() <= src.getRawBits(); }
bool		Fixed::operator==(const Fixed &src) const { return this->getRawBits() == src.getRawBits(); }
bool		Fixed::operator!=(const Fixed &src) const { return this->getRawBits() != src.getRawBits(); }
Fixed		Fixed::operator+(const Fixed &src) const { return Fixed(this->toFloat() + src.toFloat()); }
Fixed		Fixed::operator-(const Fixed &src) const { return Fixed(this->toFloat() - src.toFloat()); }
Fixed		Fixed::operator*(const Fixed &src) const { return Fixed(this->toFloat() * src.toFloat()); }

Fixed		Fixed::operator/(const Fixed &src) const {

	if (src.toInt() == 0) {
		return (this->toFloat() < 0 ? Fixed(-INFINITY) : Fixed(INFINITY));
	}
	return Fixed(this->toFloat() / src.toFloat());
}

Fixed &		Fixed::operator++(void) {			// pre increment
	
	this->setRawBits(this->getRawBits() + 1);
	return *this;
}

Fixed		Fixed::operator++(__unused int _) {	// post increment
	
	Fixed	cpy = *this;

	this->setRawBits(this->_fixed + 1);
	return cpy;
}

Fixed &		Fixed::operator--(void) {			// pre decrement
	
	this->setRawBits(this->getRawBits() - 1);
	return *this;
}

Fixed		Fixed::operator--(__unused int _) {	// post decrement
	
	Fixed	cpy = *this;

	this->setRawBits(this->_fixed - 1);
	return cpy;
}

std::ostream &		operator<<(std::ostream &out, const Fixed &fixed) {
	
	out << fixed.toFloat();
	return out;
}
