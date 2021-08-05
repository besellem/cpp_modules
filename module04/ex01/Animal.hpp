/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besellem <besellem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 12:23:34 by besellem          #+#    #+#             */
/*   Updated: 2021/08/05 13:48:39 by besellem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal {

	public:
		Animal(void);
		Animal(std::string type);
		Animal(const Animal &ref);
		virtual ~Animal(void);
	
		Animal &		operator=(const Animal &ref);
	
		virtual void			makeSound(void) const;
		std::string				getType(void) const;
		virtual void			setIdea(uint, std::string) = 0;
		virtual std::string		getIdea(uint) const = 0;

	protected:
		std::string		_type;

};

#endif
