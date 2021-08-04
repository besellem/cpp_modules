/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besellem <besellem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 16:33:00 by besellem          #+#    #+#             */
/*   Updated: 2021/08/04 11:25:18 by besellem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap {

	public:
		FragTrap(void);
		FragTrap(std::string name);
		FragTrap(const FragTrap &ref);
		virtual ~FragTrap(void);
	
		FragTrap &		operator=(const FragTrap &ref);

		void			highFivesGuys(void);
	
};

#endif
