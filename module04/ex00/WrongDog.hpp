/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongDog.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besellem <besellem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 13:53:47 by besellem          #+#    #+#             */
/*   Updated: 2021/08/04 14:01:09 by besellem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_DOG_HPP
# define WRONG_DOG_HPP

# include <iostream>
# include "WrongAnimal.hpp"

class WrongDog : public WrongAnimal {

	public:
		WrongDog(void);
		WrongDog(std::string type);
		WrongDog(const WrongDog &ref);
		virtual ~WrongDog(void);
	
		WrongDog &		operator=(const WrongDog &ref);

		void			makeSound(void) const;
	
};

#endif
