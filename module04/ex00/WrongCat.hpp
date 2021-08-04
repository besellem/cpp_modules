/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besellem <besellem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 13:52:50 by besellem          #+#    #+#             */
/*   Updated: 2021/08/04 14:01:16 by besellem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_CAT_HPP
# define WRONG_CAT_HPP

# include <iostream>
# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {

	public:
		WrongCat(void);
		WrongCat(std::string type);
		WrongCat(const WrongCat &ref);
		virtual ~WrongCat(void);
	
		WrongCat &		operator=(const WrongCat &ref);

		void			makeSound(void) const;
	
};

#endif
