/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besellem <besellem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 12:23:34 by besellem          #+#    #+#             */
/*   Updated: 2021/08/09 18:47:50 by besellem         ###   ########.fr       */
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
		AMateria(std::string const & type);
		AMateria(const AMateria &ref);
		~AMateria(void);

		std::string const &		getType() const; // Returns the materia type
		virtual AMateria *		clone() const = 0;
		virtual void			use(ICharacter &target);
	
	protected:
		std::string		_type;
	
};

#endif
