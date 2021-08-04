/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besellem <besellem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 12:53:50 by besellem          #+#    #+#             */
/*   Updated: 2021/08/04 12:54:04 by besellem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include "Animal.hpp"

class Dog : public Animal {

	public:
		Dog(void);
		Dog(std::string type);
		Dog(const Dog &ref);
		virtual ~Dog(void);
	
		Dog &		operator=(const Dog &ref);

		virtual void	makeSound(void) const;
	
};

#endif
