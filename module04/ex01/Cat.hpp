/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besellem <besellem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 12:36:16 by besellem          #+#    #+#             */
/*   Updated: 2021/08/08 16:52:24 by besellem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include <sys/types.h>
# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal {

	public:
		Cat(void);
		Cat(std::string type);
		Cat(const Cat &ref);
		virtual ~Cat(void);
	
		Cat &		operator=(const Cat &ref);

		virtual void			makeSound(void) const;
		virtual void			setIdea(uint, std::string &);
		virtual std::string &	getIdea(uint) const;
	
	private:
		Brain			*_brain;
	
};

#endif
