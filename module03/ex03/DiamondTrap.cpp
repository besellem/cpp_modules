/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besellem <besellem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 16:50:04 by besellem          #+#    #+#             */
/*   Updated: 2021/08/04 11:33:41 by besellem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

// DiamondTrap::DiamondTrap(void) :
// 	ClapTrap("UNKNOWN", 100, 50, 30),
// 	_clap_name(this->_name + "_clap_name") {
	
// 	std::cout << "DiamondTrap default constructor called" << std::endl;
// }

// DiamondTrap::DiamondTrap(std::string name) :
// 	ClapTrap(name, 100, 50, 30),
// 	_clap_name(this->_name + "_clap_name") {
	
// 	std::cout << "DiamondTrap string constructor called" << std::endl;
// }


DiamondTrap::DiamondTrap(void) :
	FragTrap("UNKNOWN"),
	ScavTrap("UNKNOWN"),
	_clap_name(this->_name + "_clap_name") {
	
	std::cout << "DiamondTrap default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) :
	FragTrap(name),
	ScavTrap(name),
	_clap_name(name + "_clap_name") {
	
	std::cout << "DiamondTrap string constructor called" << std::endl;
}


DiamondTrap::DiamondTrap(const DiamondTrap &ref) {
	*this = ref;
}

DiamondTrap::~DiamondTrap(void) {
	std::cout << "DiamondTrap destructor called" << std::endl;
}


DiamondTrap &		DiamondTrap::operator=(const DiamondTrap &ref) {
	
	if (this == &ref)
		return *this;
	
	this->_name = ref.getName();
	return *this;
}

void			DiamondTrap::whoAmI(void) {
	std::cout << "My name is [" << this->getName() \
			  << "] but my Claptrap name is [" << this->_clap_name \
			  << "]. I AM A DIAMOND TRAP !" << std::endl;
	std::cout << "HP: " << this->_hit_points \
			  << ", EP: " << this->_energy_points \
			  << ", AD: " << this->_attack_damage \
			  << std::endl;
}
