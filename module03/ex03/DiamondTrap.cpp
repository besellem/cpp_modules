/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besellem <besellem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 16:50:04 by besellem          #+#    #+#             */
/*   Updated: 2021/08/04 17:03:12 by besellem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) : ClapTrap("UNKNOWN") {

		this->_hit_points = this->FragTrap::_hit_points;
		this->_energy_points = this->ScavTrap::_energy_points;
		this->_attack_damage = this->FragTrap::_attack_damage;
		this->ClapTrap::_name = this->_name + "_clap_name";

	std::cout << "DiamondTrap default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name) {

	this->_hit_points = this->FragTrap::_hit_points;
	this->_energy_points = this->ScavTrap::_energy_points;
	this->_attack_damage = this->FragTrap::_attack_damage;
	this->ClapTrap::_name = name + "_clap_name";

	std::cout << "DiamondTrap string constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &ref) :
	ClapTrap(ref._name),
	FragTrap(ref._name),
	ScavTrap(ref._name) {

	this->_hit_points = ref._hit_points;
	this->_energy_points = ref._energy_points;
	this->_attack_damage = ref._attack_damage;
}

DiamondTrap::~DiamondTrap(void) {
	std::cout << "DiamondTrap destructor called" << std::endl;
}


void		DiamondTrap::attack(std::string const & target) {
	this->ScavTrap::attack(target);
}

DiamondTrap &		DiamondTrap::operator=(const DiamondTrap &ref) {
	
	if (this == &ref)
		return *this;
	
	this->_name = ref.getName();
	return *this;
}

void			DiamondTrap::whoAmI(void) {
	std::cout << "My name is [" << this->getName() \
			  << "] but my Claptrap name is [" << this->ClapTrap::_name \
			  << "]. I AM A DIAMOND TRAP !" << std::endl;


	std::cout << "HP: " << this->_hit_points \
			  << ", EP: " << this->_energy_points \
			  << ", AD: " << this->_attack_damage \
			  << std::endl;
}
