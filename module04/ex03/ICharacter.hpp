/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besellem <besellem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 12:23:34 by besellem          #+#    #+#             */
/*   Updated: 2021/08/10 17:59:44 by besellem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP

# include <iostream>
# include <sys/types.h>
# include "AMateria.hpp"

class AMateria;

class ICharacter {
	
	public:
		virtual ~ICharacter(void) {}
		
		virtual std::string const &	getName(void) const = 0;
		virtual void				equip(AMateria *) = 0;
		virtual void				unequip(int) = 0;
		virtual void				use(int, ICharacter &) = 0;
	
};

#endif
