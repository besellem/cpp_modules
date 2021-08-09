/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besellem <besellem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/01 16:38:42 by besellem          #+#    #+#             */
/*   Updated: 2021/08/09 15:40:43 by besellem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void) {
	std::cout << "Ice default constructor called" << std::endl;
}

Ice::Ice(std::string name) {
	std::cout << "Ice string constructor called" << std::endl;
}

Ice::Ice(const Ice &ref) {
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
