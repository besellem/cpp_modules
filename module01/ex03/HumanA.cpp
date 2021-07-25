/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besellem <besellem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/25 15:38:46 by besellem          #+#    #+#             */
/*   Updated: 2021/07/25 15:54:21 by besellem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) :
	_name(name),
	_weapon(weapon) {
	
}

HumanA::~HumanA(void) {
	
}


void	HumanA::attack(void) {

	std::cout << this->_name << " attacks with his " \
	          << this->_weapon.getType() << std::endl;
}
