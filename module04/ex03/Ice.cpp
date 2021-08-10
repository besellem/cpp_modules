/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besellem <besellem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/01 16:38:42 by besellem          #+#    #+#             */
/*   Updated: 2021/08/10 11:27:51 by besellem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void) : AMateria("ice") {
	return ;
}

Ice::Ice(const Ice &ref) : AMateria(ref) {
	return ;
}

Ice::~Ice(void) {
	return ;
}


Ice &		Ice::operator=(const Ice &ref) {
	
	if (this == &ref) return *this;

	this->_type = ref._type;
	return *this;
}


AMateria *		Ice::clone(void) const {
	return new Ice(*this);
}

void			Ice::use(ICharacter &target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
