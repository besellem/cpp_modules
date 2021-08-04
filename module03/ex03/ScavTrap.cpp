/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besellem <besellem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/01 16:38:42 by besellem          #+#    #+#             */
/*   Updated: 2021/08/04 16:56:19 by besellem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap("UNKNOWN") {
	
	std::cout << "ScavTrap default constructor called" << std::endl;
	this->_hit_points = 100;
	this->_energy_points = 50;
	this->_attack_damage = 20;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {

	std::cout << "ScavTrap string constructor called" << std::endl;
	this->_hit_points = 100;
	this->_energy_points = 50;
	this->_attack_damage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &ref) : ClapTrap(ref) {
	return ;
}

ScavTrap::~ScavTrap(void) {
	std::cout << "ScavTrap destructor called" << std::endl;
}


ScavTrap &		ScavTrap::operator=(const ScavTrap &ref) {
	
	if (this == &ref)
		return *this;
	
	this->_name = ref.getName();
	return *this;
}


void		ScavTrap::attack(std::string const & target) {
	std::cout << "ScavTrap [" << this->getName() \
			  << "] attacks [" << target \
			  << "], causing " << this->_attack_damage << " points of damage!" << std::endl;
}

void			ScavTrap::guardGate(void) const {

	if (this->_energy_points <= 0 && this->_hit_points <= 0) {
		std::cout << "ScavTrap [" << this->getName() << "] cannot be a guardian anymore, it died tragically ..." << std::endl;
	} else {
		std::cout << "ScavTrap [" << this->getName() << "] is now a guardian of the gate" << std::endl;
	}
}
