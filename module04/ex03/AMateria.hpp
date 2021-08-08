/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besellem <besellem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 12:23:34 by besellem          #+#    #+#             */
/*   Updated: 2021/08/08 17:01:29 by besellem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <sys/types.h>

class AMateria
{
	
	public:
		AMateria(std::string const & type);

		std::string const &		getType() const; // Returns the materia type
		virtual AMateria *		clone() const = 0;
		virtual void			use(ICharacter & target);
	
	protected:
		
	
};

#endif
