/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besellem <besellem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 17:42:11 by besellem          #+#    #+#             */
/*   Updated: 2021/08/10 17:46:02 by besellem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void) : IMateriaSource() {
	return ;
}

MateriaSource::MateriaSource(const MateriaSource &ref) : IMateriaSource(ref) {
	return ;
}

MateriaSource::~MateriaSource(void) {
	return ;
}


MateriaSource &		MateriaSource::operator=(const MateriaSource &ref) {
	
	if (this == &ref) return *this;

	// to implement
	return *this;
}


void				MateriaSource::learnMateria(AMateria *m) {
	
}

AMateria *			MateriaSource::createMateria(std::string const &type) {
	
}
