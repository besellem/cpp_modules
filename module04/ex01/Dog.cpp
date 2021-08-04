/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besellem <besellem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 12:54:23 by besellem          #+#    #+#             */
/*   Updated: 2021/08/04 13:39:08 by besellem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal("Dog") {
	std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(const Dog &ref) : Animal(ref) {
	return ;
}

Dog::~Dog(void) {
	std::cout << "Dog destructor called" << std::endl;
}

void	Dog::makeSound(void) const {
	std::cout << "The Dog says 'Woofff'!" << std::endl;
}


Dog &		Dog::operator=(const Dog &ref) {
	
	if (this == &ref)
		return *this;
	
	this->_type = ref.getType();
	return *this;
}
