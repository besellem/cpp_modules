/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besellem <besellem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 12:54:23 by besellem          #+#    #+#             */
/*   Updated: 2021/08/05 15:00:08 by besellem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal("Dog"), _brain(new Brain) {
	std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(const Dog &ref) : Animal(ref) {

	if (this == &ref) return ;

	this->_brain = new Brain(*(ref._brain));
	return ;
}

Dog::~Dog(void) {
	delete this->_brain;
	std::cout << "Dog destructor called" << std::endl;
}


void			Dog::makeSound(void) const {
	std::cout << "The Dog says 'Woofff'!" << std::endl;
}

void			Dog::setIdea(uint index, std::string str) {
	this->_brain->setIdea(index, str);
}

std::string		Dog::getIdea(uint index) const {
	return this->_brain->getIdea(index);
}


Dog &			Dog::operator=(const Dog &ref) {
	
	if (this == &ref) return *this;
	
	this->_type = ref.getType();
	for (size_t i = 0; i < IDEAS_NBR; i++)
		this->_brain->setIdea(i, ref._brain->getIdea(i));
	
	return *this;
}
