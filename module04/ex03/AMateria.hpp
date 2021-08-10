/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besellem <besellem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 12:23:34 by besellem          #+#    #+#             */
/*   Updated: 2021/08/10 12:11:22 by besellem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include <sys/types.h>
# include "ICharacter.hpp"

class AMateria
{
	
	public:
		AMateria(std::string const &);
		AMateria(const AMateria &);
		~AMateria(void);

		std::string const &		getType(void) const; // Returns the materia type
		virtual AMateria *		clone(void) const = 0;
		virtual void			use(ICharacter &);
	
	protected:
		std::string		_type;
	
};

#endif
