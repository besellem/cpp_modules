/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besellem <besellem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/01 16:38:46 by besellem          #+#    #+#             */
/*   Updated: 2021/08/08 21:47:58 by besellem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include <iostream>
# include "AMateria.hpp"

class Ice : public AMateria {

	public:
		Ice(void);
		Ice(std::string name);
		Ice(const Ice &ref);
		~Ice(void);
	
		Ice &		operator=(const Ice &ref);
	
};

#endif
