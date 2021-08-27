/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besellem <besellem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/27 01:09:06 by besellem          #+#    #+#             */
/*   Updated: 2021/08/27 05:05:31 by besellem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(const uint &n) : _n(n), _current_n(0)
{
}

Span::Span(Span const &ref)
{
	*this = ref;
}

Span::~Span()
{
}

Span &			Span::operator=(Span const &ref)
{
	if (this == &ref)
		return *this;
	
	_n = ref._n;
	_current_n = ref._current_n;
	_lst = ref._lst;
	return *this;
}

void			Span::addNumber(const int &nb)
{
	if (_current_n == _n)
		throw Span::TooMuchNumbersStored();
	_lst.push_back(nb);
}

int				Span::shortestSpan(void) const
{
	Span							tmp(*this);

	std::sort(tmp._lst.begin(), tmp._lst.end(), std::greater<int>());
	
	// std::list<int>::const_iterator	it = tmp._lst.begin();
	// std::list<int>::const_iterator	ite = tmp._lst.end();
	int								span = 0;
	// int								tmp_span = 0;

	// int last = *it;
	// ++it;
	// for (; it != ite; ++it)
	// {
	// 	std::cout << *it << std::endl;
	// 	tmp_span = std::abs(*it - (*it + 1));
	// 	if (tmp_span < span)
	// 		span = tmp_span;
	// }
	return span;
}

// int		Span::longestSpan(void) const
// {
	
// }


const char *	Span::TooMuchNumbersStored::what(void) const throw()
{
	return "too much nummbers stored";
}
