/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besellem <besellem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 18:52:49 by besellem          #+#    #+#             */
/*   Updated: 2021/08/10 12:11:59 by besellem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include <iostream>
# include "AMateria.hpp"

class Cure : public AMateria {

	public:
		Cure(void);
		Cure(const Cure &);
		virtual ~Cure(void);
	
		Cure &		operator=(const Cure &);

		AMateria *		clone(void) const;
		void			use(ICharacter &);
	
};

#endif
