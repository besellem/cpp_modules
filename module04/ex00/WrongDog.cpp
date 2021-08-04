/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongDog.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besellem <besellem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 13:53:17 by besellem          #+#    #+#             */
/*   Updated: 2021/08/04 13:57:13 by besellem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongDog.hpp"

WrongDog::WrongDog(void) : WrongAnimal("WrongDog") {
	std::cout << "WrongDog default constructor called" << std::endl;
}

WrongDog::WrongDog(const WrongDog &ref) {
	*this = ref;
}

WrongDog::~WrongDog(void) {
	std::cout << "WrongDog destructor called" << std::endl;
}

void	WrongDog::makeSound(void) const {
	std::cout << "The WrongDog says 'Woofff'!" << std::endl;
}


WrongDog &		WrongDog::operator=(const WrongDog &ref) {
	
	if (this == &ref)
		return *this;
	
	this->_type = ref.getType();
	return *this;
}
