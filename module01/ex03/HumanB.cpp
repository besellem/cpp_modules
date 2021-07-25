/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besellem <besellem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/25 15:23:53 by besellem          #+#    #+#             */
/*   Updated: 2021/07/25 16:19:27 by besellem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) :
	_name(name),
	_weapon(nullptr) {

}

HumanB::~HumanB(void) {
	
}


void	HumanB::attack(void) {

	std::cout << this->_name << " attacks with his " \
	          << this->_weapon->getType() << std::endl;
}


void	HumanB::setWeapon(Weapon &weapon) {
	
	this->_weapon = &weapon;
}
