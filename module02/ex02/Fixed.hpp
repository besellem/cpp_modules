/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besellem <besellem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 12:38:19 by besellem          #+#    #+#             */
/*   Updated: 2021/07/29 11:08:59 by besellem         ###   ########.fr       */
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
	
		Fixed &			operator=(const Fixed &src);
		bool			operator>(const Fixed &src) const;
		bool			operator<(const Fixed &src) const;
		bool			operator>=(const Fixed &src) const;
		bool			operator<=(const Fixed &src) const;
		bool			operator==(const Fixed &src) const;
		bool			operator!=(const Fixed &src) const;
		Fixed			operator+(const Fixed &src) const;
		Fixed			operator-(const Fixed &src) const;
		Fixed			operator*(const Fixed &src) const;
		Fixed			operator/(const Fixed &src) const;
		Fixed &			operator++(void);	// pre
		Fixed			operator++(int);	// post
		Fixed &			operator--(void);	// pre
		Fixed			operator--(int);	// post

		int				getRawBits(void) const;
		void			setRawBits(int const raw);
		int				toInt(void) const;
		float			toFloat(void) const;
		const static Fixed &	min(const Fixed &a, const Fixed &b);
		const static Fixed &	max(const Fixed &a, const Fixed &b);

	private:
		int					_fixed;
		const static int	_bits;
		
};

std::ostream &		operator<<(std::ostream &s, const Fixed &fixed);

#endif
