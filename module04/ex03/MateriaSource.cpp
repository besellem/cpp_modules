/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besellem <besellem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 17:42:11 by besellem          #+#    #+#             */
/*   Updated: 2021/08/12 14:06:02 by besellem         ###   ########.fr       */
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
	this->_inventory_idx = ref._inventory_idx;

	return *this;
}


void				MateriaSource::learnMateria(AMateria *m) {
	
	if (!m || this->_inventory_idx >= 4) return ;

	this->_inventory[this->_inventory_idx] = m;
	this->_inventory_idx++;
}

AMateria *			MateriaSource::createMateria(std::string const &type) {

	for (int i = 0; i < 4; ++i) {
		if (this->_inventory[i]->getType() == type) {
			return this->_inventory[i]->clone();
		}
	}
	return NULL;
}
