/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besellem <besellem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 16:20:19 by besellem          #+#    #+#             */
/*   Updated: 2021/08/09 17:28:21 by besellem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIA_SOURCE_HPP
# define IMATERIA_SOURCE_HPP

# include <iostream>
# include <sys/types.h>

class IMateriaSource
{
	public:
		virtual ~IMateriaSource() {}
		virtual void learnMateria(AMateria*) = 0;
		virtual AMateria *	createMateria(std::string const & type) = 0;
};

#endif
