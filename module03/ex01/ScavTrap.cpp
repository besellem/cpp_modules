/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besellem <besellem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/01 16:38:42 by besellem          #+#    #+#             */
/*   Updated: 2021/08/01 17:32:50 by besellem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

const int	ScavTrap::_hit_points = 100;
const int	ScavTrap::_energy_points = 50;
const int	ScavTrap::_attack_damage = 20;

ScavTrap::ScavTrap(void) : _name(this->getName()) {
	return ;
}

ScavTrap::ScavTrap(std::string name) : _name(name) {
	return ;
}

ScavTrap::ScavTrap(const ScavTrap &ref) {
	*this = ref;
}

ScavTrap::~ScavTrap(void) {
	return ;
}


ScavTrap &		ScavTrap::operator=(const ScavTrap &ref) {
	
	if (this == &ref)
		return *this;
	
	this->_name = ref.getName();
	return *this;
}

void			ScavTrap::guardGate() const {
	std::cout << "ScavTrap is now a guardian of the gate" << std::endl;
}
