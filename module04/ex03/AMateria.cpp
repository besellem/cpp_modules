/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besellem <besellem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 12:25:38 by besellem          #+#    #+#             */
/*   Updated: 2021/08/12 14:04:25 by besellem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const & type) : _type(type) {
	return ;
}

AMateria::AMateria(const AMateria &ref) {
	*this = ref;
}

AMateria::~AMateria(void) {
	return ;
}


AMateria &		AMateria::operator=(const AMateria &ref) {
	
	if (this == &ref) return *this;
	
	this->_type = ref._type;
	return *this;
}


std::string const &		AMateria::getType(void) const { return this->_type; }

void			AMateria::use(ICharacter &target) {
	(void)target;
}
