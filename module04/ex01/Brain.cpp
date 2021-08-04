/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besellem <besellem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 14:07:06 by besellem          #+#    #+#             */
/*   Updated: 2021/08/04 15:52:27 by besellem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void) {

	for (size_t i = 0; i < 100; ++i) this->_strs[i].clear();
	
	std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain(const Brain &ref) {
	*this = ref;
}

Brain::~Brain(void) {
	std::cout << "Brain destructor called" << std::endl;
}


Brain &		Brain::operator=(const Brain &ref) {
	
	if (this == &ref)
		return *this;
	
	for (size_t i = 0; i < 100; ++i) {
		this->_strs->copy()
	}
	
	this->_strs = ref._strs;
	return *this;
}
