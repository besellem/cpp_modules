/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besellem <besellem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 14:07:06 by besellem          #+#    #+#             */
/*   Updated: 2021/08/08 16:48:32 by besellem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void) {

	for (size_t i = 0; i < IDEAS_NBR; ++i) this->_ideas[i].clear();
	
	std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain(const Brain &ref) {
	*this = ref;
}

Brain::~Brain(void) {
	std::cout << "Brain destructor called" << std::endl;
}


Brain &			Brain::operator=(const Brain &ref) {
	
	if (this == &ref)
		return *this;
	
	for (size_t i = 0; i < IDEAS_NBR; ++i)
		this->_ideas[i] = ref._ideas[i];
	
	return *this;
}


void			Brain::setIdea(uint index, std::string &str) {
	
	if (index >= IDEAS_NBR) return;
	this->_ideas[index] = str;
}

std::string &	Brain::getIdea(uint index) {
	
	if (index >= IDEAS_NBR) return this->_ideas[IDEAS_NBR - 1];
	return this->_ideas[index];
}
