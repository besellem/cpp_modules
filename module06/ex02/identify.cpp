/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   identify.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besellem <besellem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 15:44:22 by besellem          #+#    #+#             */
/*   Updated: 2021/08/22 15:54:57 by besellem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

void		identify(Base *p)
{
	Base	ptr;

	try
	{
		ptr = dynamic_cast<A &>(*p);
		std::cout << "A" << std::endl;
		return ;
	}
	catch (std::exception &e) {}

	try
	{
		ptr = dynamic_cast<B &>(*p);
		std::cout << "B" << std::endl;
		return ;
	}
	catch (std::exception &e) {}

	try
	{
		ptr = dynamic_cast<C &>(*p);
		std::cout << "C" << std::endl;
		return ;
	}
	catch (std::exception &e) {}
}

void		identify(Base &p)
{
	Base	ptr;

	try
	{
		ptr = dynamic_cast<A &>(p);
		std::cout << "A" << std::endl;
		return ;
	}
	catch (std::exception &e) {}

	try
	{
		ptr = dynamic_cast<B &>(p);
		std::cout << "B" << std::endl;
		return ;
	}
	catch (std::exception &e) {}

	try
	{
		ptr = dynamic_cast<C &>(p);
		std::cout << "C" << std::endl;
		return ;
	}
	catch (std::exception &e) {}
}
