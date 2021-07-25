/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besellem <besellem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/25 15:26:24 by besellem          #+#    #+#             */
/*   Updated: 2021/07/25 15:35:48 by besellem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type) {
	
}

Weapon::~Weapon(void) {
	
}


void				Weapon::setType(std::string type) {
	this->_type = type;
}

const std::string	&Weapon::getType(void) {
	return this->_type;
}
