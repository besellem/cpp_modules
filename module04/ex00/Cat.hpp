/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besellem <besellem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 12:36:16 by besellem          #+#    #+#             */
/*   Updated: 2021/08/04 12:53:46 by besellem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include "Animal.hpp"

class Cat : public Animal {

	public:
		Cat(void);
		Cat(std::string type);
		Cat(const Cat &ref);
		virtual ~Cat(void);
	
		Cat &		operator=(const Cat &ref);

		virtual void	makeSound(void) const;
	
};

#endif
