/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besellem <besellem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 12:25:38 by besellem          #+#    #+#             */
/*   Updated: 2021/08/04 12:56:27 by besellem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) : _type("Animal") {
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(std::string type) : _type(type) {
	std::cout << "Animal string constructor called" << std::endl;
}

Animal::Animal(const Animal &ref) {
	*this = ref;
}

Animal::~Animal(void) {
	std::cout << "Animal destructor called" << std::endl;
}


Animal &		Animal::operator=(const Animal &ref) {
	
	if (this == &ref)
		return *this;
	
	this->_type = ref.getType();
	return *this;
}


std::string		Animal::getType(void) const { return this->_type; }

void	Animal::makeSound(void) const {
	std::cout << "An Animal cannot talk!" << std::endl;
}
