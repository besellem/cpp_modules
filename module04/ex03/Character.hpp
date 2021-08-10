/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besellem <besellem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 18:36:19 by besellem          #+#    #+#             */
/*   Updated: 2021/08/10 18:15:22 by besellem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include <sys/types.h>
# include "ICharacter.hpp"

class Character : public ICharacter {
	
	public:
		Character(std::string);
		Character(const Character &);
		virtual ~Character(void);
	
		Character &				operator=(const Character &);
		
		std::string const &		getName(void) const;
		void					equip(AMateria *);
		void					unequip(int);
		void					use(int, ICharacter &);
	
	private:
		std::string				_name;
		AMateria				*_inventory[4];
		int						_inventory_idx;

};

#endif
