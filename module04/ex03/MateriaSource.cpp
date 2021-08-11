/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besellem <besellem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 17:42:11 by besellem          #+#    #+#             */
/*   Updated: 2021/08/11 17:22:11 by besellem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

MateriaSource::MateriaSource(void) :
	IMateriaSource(),
	_inventory_idx(0) {
	
	for (int i = 0; i < 4; ++i) { this->_inventory[i] = NULL; }
}

MateriaSource::MateriaSource(const MateriaSource &ref) : IMateriaSource(ref) {
	*this = ref;
}

MateriaSource::~MateriaSource(void) {
	return ;
}


MateriaSource &		MateriaSource::operator=(const MateriaSource &ref) {
	
	if (this == &ref) return *this;

	for (int i = 0; i < 4; ++i) { this->_inventory[i] = ref._inventory[i]; }
	
	return *this;
}


void				MateriaSource::learnMateria(AMateria *m) {
	(void)m;
}

AMateria *			MateriaSource::createMateria(std::string const &type) {

	if (type == "ice") return new Ice();
	if (type == "cure") return new Cure();
	
	return NULL;
}
