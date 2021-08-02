/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besellem <besellem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 12:38:19 by besellem          #+#    #+#             */
/*   Updated: 2021/08/02 16:09:41 by besellem         ###   ########.fr       */
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
		Fixed &			operator=(const Fixed &src);
		Fixed &			operator++(void);	// pre incrementation
		Fixed			operator++(int);	// post incrementation
		Fixed &			operator--(void);	// pre decrementation
		Fixed			operator--(int);	// post decrementation

		int				getRawBits(void) const;
		void			setRawBits(int const raw);
		int				toInt(void) const;
		float			toFloat(void) const;
		Fixed &					min(Fixed &a, Fixed &b);
		Fixed &					max(Fixed &a, Fixed &b);
		const static Fixed &	min(const Fixed &a, const Fixed &b);
		const static Fixed &	max(const Fixed &a, const Fixed &b);

	private:
		int					_fixed;
		const static int	_bits;
		
};

std::ostream &		operator<<(std::ostream &s, const Fixed &fixed);

#endif
