/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besellem <besellem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 17:40:32 by besellem          #+#    #+#             */
/*   Updated: 2021/08/10 17:44:58 by besellem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIA_SOURCE_HPP
# define MATERIA_SOURCE_HPP

# include <iostream>
# include <sys/types.h>
# include "IMateriaSource.hpp"
# include "AMateria.hpp"

class MateriaSource : public IMateriaSource {
	
	public:
		MateriaSource(void);
		MateriaSource(const MateriaSource &);
		virtual ~MateriaSource(void);
		
		void		learnMateria(AMateria *);
		AMateria *	createMateria(std::string const &);
	
};

#endif
