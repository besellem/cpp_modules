/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besellem <besellem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 12:38:19 by besellem          #+#    #+#             */
/*   Updated: 2021/07/28 17:27:05 by besellem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed {
	
	public:
		Fixed(void);
		Fixed(const int fixed);
		Fixed(const float fixed);
		Fixed(const Fixed &src);
		~Fixed(void);
	
		Fixed &		operator=(const Fixed &src);
		bool		operator>(const Fixed &src) const;
		bool		operator<(const Fixed &src) const;
		bool		operator>=(const Fixed &src) const;
		bool		operator<=(const Fixed &src) const;
		bool		operator==(const Fixed &src) const;
		bool		operator!=(const Fixed &src) const;
		Fixed &		operator++(void);
		Fixed &		operator--(void);
		Fixed &		operator+(const Fixed &src);
		Fixed &		operator-(const Fixed &src);
		Fixed &		operator*(const Fixed &src);
		Fixed &		operator/(const Fixed &src);

		int			getRawBits(void) const;
		void		setRawBits(int const raw);
		int			toInt(void) const;
		float		toFloat(void) const;

	private:
		int					_fixed;
		const static int	_bits;
		
};

std::ostream &		operator<<(std::ostream &s, const Fixed &fixed);

#endif
