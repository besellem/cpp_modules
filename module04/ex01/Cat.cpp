/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besellem <besellem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 12:30:50 by besellem          #+#    #+#             */
/*   Updated: 2021/08/04 12:57:34 by besellem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal("Cat") {
	std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(const Cat &ref) : Animal(ref) {
	return ;
}

Cat::~Cat(void) {
	std::cout << "Cat destructor called" << std::endl;
}

void	Cat::makeSound(void) const {
	std::cout << "The Cat says 'Meowww'!" << std::endl;
}

Cat &		Cat::operator=(const Cat &ref) {
	
	if (this == &ref)
		return *this;
	
	this->_type = ref.getType();
	return *this;
}
