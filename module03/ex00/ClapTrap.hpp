/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besellem <besellem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/01 16:06:20 by besellem          #+#    #+#             */
/*   Updated: 2021/08/01 16:41:34 by besellem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap {

	public:
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap &ref);
		~ClapTrap(void);
	
		ClapTrap &		operator=(const ClapTrap &ref);

		std::string		getName(void) const;

		void			attack(std::string const & target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);
	
	private:
		std::string			_name;
		static const int	_hit_points;
		static const int	_energy_points;
		static const int	_attack_damage;
	
};

#endif
