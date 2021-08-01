/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besellem <besellem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/01 16:06:17 by besellem          #+#    #+#             */
/*   Updated: 2021/08/01 17:32:44 by besellem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

const int	ClapTrap::_hit_points = 10;
const int	ClapTrap::_energy_points = 10;
const int	ClapTrap::_attack_damage = 0;

ClapTrap::ClapTrap(void) : _name(nullptr) {
	return ;
}

ClapTrap::ClapTrap(std::string name) : _name(name) {
	return ;
}

ClapTrap::ClapTrap(const ClapTrap &ref) {
	*this = ref;
}

ClapTrap::~ClapTrap(void) {
	return ;
}


ClapTrap &		ClapTrap::operator=(const ClapTrap &ref) {
	
	if (this == &ref)
		return *this;
	
	this->_name = ref.getName();
	return *this;
}


std::string		ClapTrap::getName(void) const { return this->_name; }
void			ClapTrap::setName(std::string &name) { this->_name = name; }

void		ClapTrap::attack(std::string const & target) {
	std::cout << "ClapTrap " << this->getName() \
			  << " attacks " << target \
			  << ", causing " << ClapTrap::_hit_points << " points of damage!" << std::endl;
}

void		ClapTrap::takeDamage(unsigned int amount) {
	std::cout << "ClapTrap " << this->getName() \
			  << " takes " << amount << " points of damage!" << std::endl;
}

void		ClapTrap::beRepaired(unsigned int amount) {
	std::cout << "ClapTrap " << this->getName() \
			  << " restored " << amount << " points!" << std::endl;
}