/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besellem <besellem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 12:30:50 by besellem          #+#    #+#             */
/*   Updated: 2021/08/05 15:00:52 by besellem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal("Cat"), _brain(new Brain) {
	std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(const Cat &ref) : Animal(ref) {
	
	if (this == &ref) return ;

	this->_brain = new Brain(*(ref._brain));
	return ;
}

Cat::~Cat(void) {
	delete this->_brain;
	std::cout << "Cat destructor called" << std::endl;
}


void			Cat::makeSound(void) const {
	std::cout << "The Cat says 'Meowww'!" << std::endl;
}

void			Cat::setIdea(uint index, std::string str) {
	this->_brain->setIdea(index, str);
}

std::string		Cat::getIdea(uint index) const {
	return this->_brain->getIdea(index);
}


Cat &			Cat::operator=(const Cat &ref) {
	
	if (this == &ref) return *this;
	
	this->_type = ref.getType();
	for (size_t i = 0; i < IDEAS_NBR; i++)
		this->_brain->setIdea(i, ref._brain->getIdea(i));
	
	return *this;
}
