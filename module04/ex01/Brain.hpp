/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besellem <besellem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 14:06:21 by besellem          #+#    #+#             */
/*   Updated: 2021/08/05 15:23:30 by besellem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <sys/types.h>

# define IDEAS_NBR 100

class Brain {

	public:
		Brain(void);
		Brain(std::string type);
		Brain(const Brain &ref);
		virtual ~Brain(void);
	
		Brain &		operator=(const Brain &ref);

		virtual void			setIdea(uint, std::string);
		std::string				getIdea(uint) const;

	private:
		std::string		_ideas[IDEAS_NBR];

};

#endif
