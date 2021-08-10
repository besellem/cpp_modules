/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besellem <besellem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 12:25:38 by besellem          #+#    #+#             */
/*   Updated: 2021/08/10 12:11:28 by besellem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const & type) : _type(type) {
	// std::cout << "AMateria default constructor called" << std::endl;
}

AMateria::AMateria(const AMateria &ref) {
	*this = ref;
}

AMateria::~AMateria(void) {
	// std::cout << "AMateria destructor called" << std::endl;
}


AMateria &		AMateria::operator=(const AMateria &ref) {
	
	if (this == &ref) return *this;
	
	this->_type = ref._type;
	return *this;
}


std::string const &		AMateria::getType(void) const { return this->_type; }
