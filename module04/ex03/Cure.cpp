/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besellem <besellem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 18:50:11 by besellem          #+#    #+#             */
/*   Updated: 2021/08/10 11:27:45 by besellem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void) : AMateria("cure") {
	return ;
}

Cure::Cure(const Cure &ref) : AMateria(ref) {
	return ;
}

Cure::~Cure(void) {
	return ;
}


Cure &		Cure::operator=(const Cure &ref) {
	
	if (this == &ref) return *this;

	this->_type = ref._type;
	return *this;
}


AMateria *		Cure::clone(void) const {
	return new Cure(*this);
}

void			Cure::use(ICharacter &target) {
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}
