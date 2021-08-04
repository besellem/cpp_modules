/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besellem <besellem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 13:51:18 by besellem          #+#    #+#             */
/*   Updated: 2021/08/04 13:59:26 by besellem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_ANIMAL_HPP
# define WRONG_ANIMAL_HPP

# include <iostream>

class WrongAnimal {

	public:
		WrongAnimal(void);
		WrongAnimal(std::string type);
		WrongAnimal(const WrongAnimal &ref);
		virtual ~WrongAnimal(void);
	
		WrongAnimal &		operator=(const WrongAnimal &ref);
	
		void				makeSound(void) const;
		std::string			getType(void) const;

	protected:
		std::string			_type;

};

#endif
