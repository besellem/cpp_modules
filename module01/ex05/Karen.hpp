/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besellem <besellem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/25 19:09:10 by besellem          #+#    #+#             */
/*   Updated: 2021/07/25 21:30:58 by besellem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_HPP
# define KAREN_HPP

# include <iostream>


class Karen {

	public:
		Karen(void);
		~Karen(void);

		void	complain(std::string level);
	
	private:
		void	_debug(void);
		void	_info(void);
		void	_warning(void);
		void	_error(void);
	
};

typedef	struct	s_lookup {
	std::string	str;
	void		(Karen::*f)();
}				t_lookup;

#endif
