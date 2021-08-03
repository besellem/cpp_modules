/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besellem <besellem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/01 16:06:17 by besellem          #+#    #+#             */
/*   Updated: 2021/08/03 11:19:03 by besellem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

const int	ClapTrap::_initial_hit_points = 10;
const int	ClapTrap::_initial_energy_points = 10;
const int	ClapTrap::_initial_attack_damage = 0;

ClapTrap::ClapTrap(void) :
	_name("NO_ID"),
	_hit_points(ClapTrap::_initial_hit_points),
	_energy_points(ClapTrap::_initial_energy_points),
	_attack_damage(ClapTrap::_initial_attack_damage) {
	return ;
}

ClapTrap::ClapTrap(std::string name) :
	_name(name),
	_hit_points(ClapTrap::_initial_hit_points),
	_energy_points(ClapTrap::_initial_energy_points),
	_attack_damage(ClapTrap::_initial_attack_damage) {
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

void		ClapTrap::attack(std::string const & target) {
	std::cout << "ClapTrap " << this->getName() \
			  << " attacks " << target \
			  << ", causing " << ClapTrap::_attack_damage << " points of damage!" << std::endl;
}

void		ClapTrap::takeDamage(unsigned int amount) {

	const long	tmp = (this->_energy_points + this->_hit_points) - (long)amount;

	if ((int)amount > this->_energy_points) {
		this->_hit_points -= (amount - this->_energy_points);
		this->_energy_points = 0;
	} else {
		this->_energy_points -= amount;
	}
	
	if (tmp > 0) {
		std::cout << "ClapTrap " << this->getName() \
				  << " takes " << amount << " points of damage!" << std::endl;
	}
	else {
		
		std::cout << "ClapTrap " << this->getName() \
				  << " takes " << amount << " points of damage and it died!" << std::endl;
	}
}

void		ClapTrap::beRepaired(unsigned int amount) {

	if ((this->_hit_points + amount) > ClapTrap::_initial_hit_points) {
		this->_energy_points = this->_hit_points;
		this->_hit_points = ClapTrap::_initial_hit_points;
	}

	std::cout << "ClapTrap " << this->getName() \
			  << " restored " << amount << " points!" << std::endl;
}
