/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besellem <besellem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 12:38:19 by besellem          #+#    #+#             */
/*   Updated: 2021/07/26 12:56:19 by besellem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed {
	
	public:
		Fixed(void);
		Fixed(const Fixed &src);
		~Fixed(void);
	
		Fixed &		operator=(const Fixed &src);

		int			getRawBits(void) const;
		void		setRawBits(int const raw);

	private:
		int					_fixed;
		const static int	_bits;
		
};

#endif
