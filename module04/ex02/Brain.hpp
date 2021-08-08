/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besellem <besellem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 14:06:21 by besellem          #+#    #+#             */
/*   Updated: 2021/08/08 16:48:17 by besellem         ###   ########.fr       */
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

		virtual void			setIdea(uint, std::string &);
		virtual std::string &	getIdea(uint);

	private:
		std::string		_ideas[IDEAS_NBR];

};

#endif
