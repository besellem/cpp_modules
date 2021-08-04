/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besellem <besellem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 13:50:18 by besellem          #+#    #+#             */
/*   Updated: 2021/08/04 13:51:56 by besellem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) : _type("WrongAnimal") {
	std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type) : _type(type) {
	std::cout << "WrongAnimal string constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &ref) {
	*this = ref;
}

WrongAnimal::~WrongAnimal(void) {
	std::cout << "WrongAnimal destructor called" << std::endl;
}


WrongAnimal &		WrongAnimal::operator=(const WrongAnimal &ref) {
	
	if (this == &ref)
		return *this;
	
	this->_type = ref.getType();
	return *this;
}


std::string			WrongAnimal::getType(void) const { return this->_type; }

void	WrongAnimal::makeSound(void) const {
	std::cout << "A WrongAnimal cannot talk!" << std::endl;
}
