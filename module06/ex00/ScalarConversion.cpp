/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConversion.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besellem <besellem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 02:31:27 by besellem          #+#    #+#             */
/*   Updated: 2021/08/20 05:51:33 by besellem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConversion.hpp"

ScalarConversion::ScalarConversion(void) : _d(0.)
{}

ScalarConversion::ScalarConversion(std::string const &target) :
	_d(std::stod(target))
{}

ScalarConversion::ScalarConversion(ScalarConversion const &ref)
{
	*this = ref;
}


char			ScalarConversion::getChar(void) const
{
	char	c = static_cast<char>(_d);

	if (this->isSpecial() || _d < CHAR_MIN || _d > CHAR_MAX)
		throw ScalarConversion::ImpossibleConversion();
	else if (!std::isprint(c))
		throw ScalarConversion::NonDisplayableConversion();

	return c;
}

int				ScalarConversion::getInt(void) const
{
	if (this->isSpecial() || _d < INT_MIN || _d > INT_MAX)
		throw ScalarConversion::ImpossibleConversion();
	
	return static_cast<int>(_d);
}

float			ScalarConversion::getFloat(void) const
{
	return static_cast<float>(_d);
}

double			ScalarConversion::getDouble(void) const
{
	return _d;
}

bool			ScalarConversion::isSpecial(void) const
{
	return !std::isfinite(_d);
}

void			ScalarConversion::print(void) const
{
	try
	{
		char	c = this->getChar();
		std::cout << "char:  '" << c << "'" << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "char:   " << e.what() << std::endl;
	}

	try
	{
		int		i = this->getInt();
		std::cout << "int:    " << i << std::endl;
	}
	catch (std::exception &e)
	{
	std::cout << "int:    " << e.what() << std::endl;
	}

	std::cout << "float:  " << std::setiosflags(std::ios::fixed) << this->getFloat() << "f" << std::endl;
	std::cout << "double: " << std::setiosflags(std::ios::fixed) << this->getDouble() << std::endl;
}


ScalarConversion &	ScalarConversion::operator=(ScalarConversion const &ref)
{
	if (this == &ref)
		return *this;

	this->_d = ref._d;
	return *this;
}
