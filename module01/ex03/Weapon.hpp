/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besellem <besellem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/25 15:24:48 by besellem          #+#    #+#             */
/*   Updated: 2021/07/25 15:51:47 by besellem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>


class Weapon {

	public:
		
		Weapon(std::string type);
		~Weapon(void);

		void					setType(std::string type);
		const std::string		&getType(void);

	private:
		std::string				_type;

};

#endif
