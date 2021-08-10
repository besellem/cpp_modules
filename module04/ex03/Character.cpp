/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besellem <besellem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 11:37:39 by besellem          #+#    #+#             */
/*   Updated: 2021/08/10 18:10:51 by besellem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string name) :
	_name(name),
	_inventory_idx(0) {
	
	for (int i = 0; i < 4; ++i) { this->_inventory[i] = NULL; }
}

Character::Character(const Character &ref) {
	*this = ref;
}

Character::~Character(void) {
	return ;
}


Character &		Character::operator=(const Character &ref) {
	
	if (this == &ref) return *this;

	for (int i = 0; i < 4; ++i) { this->_inventory[i] = ref._inventory[i]; }
	
	return *this;
}


std::string const &		Character::getName(void) const { return this->_name; }

void					Character::equip(AMateria *m) {
	
	if (this->_inventory_idx >= 4) return ;

	this->_inventory[this->_inventory_idx] = m;
	this->_inventory_idx++;
}

void					Character::unequip(int idx) {
	
	if (!(idx >= 0 && idx < 4) || this->_inventory_idx < idx) return ;

	this->_inventory[idx] = NULL;
	// delete this->_inventory[idx];
}

void					Character::use(int idx, ICharacter &target) {
	
	if (!(idx >= 0 && idx < 4) || this->_inventory_idx < idx) return ;
	
	this->_inventory[idx]->use(target);
}
