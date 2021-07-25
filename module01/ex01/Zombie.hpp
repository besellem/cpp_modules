/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besellem <besellem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/25 11:22:08 by besellem          #+#    #+#             */
/*   Updated: 2021/07/25 15:14:37 by besellem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>


class Zombie {
	
	public:
		Zombie(void);
		~Zombie(void);

		void	announce(void) const;
		void	set_name(std::string name);

	private:
		std::string		_name;

};

Zombie	*zombieHorde(int N, std::string name);

#endif
