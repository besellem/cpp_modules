/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besellem <besellem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 16:20:19 by besellem          #+#    #+#             */
/*   Updated: 2021/08/10 17:41:10 by besellem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIA_SOURCE_HPP
# define IMATERIA_SOURCE_HPP

# include <iostream>
# include <sys/types.h>
# include "AMateria.hpp"

class IMateriaSource {
	
	public:
		virtual ~IMateriaSource(void) {}
		
		virtual void		learnMateria(AMateria *) = 0;
		virtual AMateria *	createMateria(std::string const &) = 0;
	
};

#endif
