/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besellem <besellem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 12:53:50 by besellem          #+#    #+#             */
/*   Updated: 2021/08/08 16:48:11 by besellem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include <sys/types.h>
# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal {

	public:
		Dog(void);
		Dog(std::string type);
		Dog(const Dog &ref);
		virtual ~Dog(void);
	
		Dog &		operator=(const Dog &ref);

		virtual void			makeSound(void) const;
		virtual void			setIdea(uint, std::string &);
		virtual std::string &	getIdea(uint) const;
	
	private:
		Brain			*_brain;
	
};

#endif
