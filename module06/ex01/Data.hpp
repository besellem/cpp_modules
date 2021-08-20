/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besellem <besellem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 05:52:26 by besellem          #+#    #+#             */
/*   Updated: 2021/08/20 06:08:03 by besellem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <stdint.h>

class Data
{

	public:
		Data(void) : _c(0), _i(0), _d(0) {}
		Data(char c, int i, double d) : _c(c), _i(i), _d(d) {}
		Data(Data const &ref) { *this = ref; }
		~Data() {}

		Data &			operator=(Data const &ref)
		{
			if (this == &ref)
				return *this;
			_c = ref._c;
			_i = ref._i;
			_d = ref._d;
			return *this;
		}

		char		getChar(void) const   { return _c; };
		int			getInt(void) const    { return _i; };
		double		getDouble(void) const { return _d; };

	
	private:
		char			_c;
		int				_i;
		double			_d;
	
};

uintptr_t		serialize(Data *ptr);
Data *			deserialize(uintptr_t raw);
