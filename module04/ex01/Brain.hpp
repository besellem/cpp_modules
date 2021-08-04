/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besellem <besellem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 14:06:21 by besellem          #+#    #+#             */
/*   Updated: 2021/08/04 14:07:16 by besellem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class Brain {

	public:
		Brain(void);
		Brain(std::string type);
		Brain(const Brain &ref);
		virtual ~Brain(void);
	
		Brain &		operator=(const Brain &ref);
	
	private:
		std::string		_strs[100];

};

#endif
