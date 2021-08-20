/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besellem <besellem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 05:56:57 by besellem          #+#    #+#             */
/*   Updated: 2021/08/20 06:12:27 by besellem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"
#include <iostream>

#define GREEN      "\e[1;32m"
#define CLR_COLOR  "\e[0m"

int	main(void)
{
	Data		*d = new Data(42, 4242, 42.42);
	Data		*ptr;

	ptr = deserialize(serialize(d));

	std::cout << "real: [" GREEN << d << CLR_COLOR "] serialize[" GREEN << serialize(d) << CLR_COLOR "]" << std::endl;
	std::cout << "mine: [" GREEN << ptr << CLR_COLOR "] serialize[" GREEN << serialize(ptr) << CLR_COLOR "]" << std::endl;

	delete d;

	return 0;
}
