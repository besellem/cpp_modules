/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besellem <besellem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 16:33:08 by besellem          #+#    #+#             */
/*   Updated: 2021/08/04 16:56:43 by besellem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap("UNKNOWN") {
	
	std::cout << "FragTrap default constructor called" << std::endl;
	this->_hit_points = 100;
	this->_energy_points = 100;
	this->_attack_damage = 30;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
	
	std::cout << "FragTrap string constructor called" << std::endl;
	this->_hit_points = 100;
	this->_energy_points = 100;
	this->_attack_damage = 30;
}

FragTrap::FragTrap(const FragTrap &ref) : ClapTrap(ref) {
	return ;
}

FragTrap::~FragTrap(void) {
	std::cout << "FragTrap destructor called" << std::endl;
}


FragTrap &		FragTrap::operator=(const FragTrap &ref) {
	
	if (this == &ref)
		return *this;
	
	this->_name = ref.getName();
	return *this;
}


void		FragTrap::attack(std::string const & target) {
	std::cout << "FragTrap [" << this->getName() \
			  << "] attacks [" << target \
			  << "], causing " << this->_attack_damage << " points of damage!" << std::endl;
}

void			FragTrap::highFivesGuys(void) {
	std::cout << "FragTrap [" << this->getName() << "] says: Wanna high five guys ?!" << std::endl;
}
