/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besellem <besellem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/01 16:38:42 by besellem          #+#    #+#             */
/*   Updated: 2021/08/08 22:02:38 by besellem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void) : ClapTrap("UNKNOWN", 100, 50, 20) {
	std::cout << "Ice default constructor called" << std::endl;
}

Ice::Ice(std::string name) : ClapTrap(name, 100, 50, 20) {
	std::cout << "Ice string constructor called" << std::endl;
}

Ice::Ice(const Ice &ref) : ClapTrap(ref) {
	return ;
}

Ice::~Ice(void) {
	std::cout << "Ice destructor called" << std::endl;
}


Ice &		Ice::operator=(const Ice &ref) {
	
	if (this == &ref)
		return *this;

	// To implement
	return *this;
}
