/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besellem <besellem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/25 15:22:28 by besellem          #+#    #+#             */
/*   Updated: 2021/07/25 15:56:46 by besellem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <iostream>
# include "Weapon.hpp"

class HumanA {

	public:
		
		HumanA(std::string name, Weapon &weapon);
		~HumanA(void);

		void			attack(void);
		
	private:
		std::string		_name;
		Weapon			&_weapon;
		
};

#endif
