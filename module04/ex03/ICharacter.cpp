/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besellem <besellem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 12:25:38 by besellem          #+#    #+#             */
/*   Updated: 2021/08/09 15:38:06 by besellem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"

ICharacter::ICharacter(std::string const & type) : _type(type) {
	// std::cout << "ICharacter default constructor called" << std::endl;
}

ICharacter::ICharacter(const ICharacter &ref) {
	*this = ref;
}

ICharacter::~ICharacter(void) {
	// std::cout << "ICharacter destructor called" << std::endl;
}


ICharacter &		ICharacter::operator=(const ICharacter &ref) {
	
	if (this == &ref)
		return *this;
	
	// To implement
	return *this;
}


// std::string const &		ICharacter::getType() const { return this->_type; }
