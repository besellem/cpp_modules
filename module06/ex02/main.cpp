/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besellem <besellem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 05:56:57 by besellem          #+#    #+#             */
/*   Updated: 2021/08/22 15:59:47 by besellem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

#define GREEN      "\e[1;32m"
#define CLR_COLOR  "\e[0m"

int	main(void)
{
	Base	*ptr = generate();
	Base	&ref = *ptr;

	std::cout << "Identify by ptr: ";
	identify(ptr);
	
	std::cout << "Identify by ref: ";
	identify(ref);

	delete ptr;

	return 0;
}
