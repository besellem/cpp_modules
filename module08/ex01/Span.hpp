/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besellem <besellem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/27 00:57:01 by besellem          #+#    #+#             */
/*   Updated: 2021/08/27 04:47:39 by besellem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <stdint.h>
# include <cstdlib>
# include <algorithm>
# include <map>
# include <list>
# include <stack>
# include <vector>

class Span
{
	
	public:
		Span(const uint &);
		Span(Span const &);
		virtual ~Span();
	
		Span &				operator=(Span const &);

		void				addNumber(const int &);
		int					shortestSpan(void) const;
		// int					longestSpan(void) const;

	private:
		Span(void);

		uint				_n;
		uint				_current_n;
		std::list<int>		_lst;

	public:
		class TooMuchNumbersStored : std::exception
		{
			public:
				const char *	what(void) const throw();
		};
	
};
