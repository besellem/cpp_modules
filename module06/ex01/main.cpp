/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besellem <besellem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 05:56:57 by besellem          #+#    #+#             */
/*   Updated: 2021/08/22 15:32:12 by besellem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"
#include <iostream>

#define GREEN      "\e[1;32m"
#define CYAN       "\e[1;36m"
#define CLR_COLOR  "\e[0m"

int	main(void)
{
	Data		*old_ptr = new Data(42, 4242, 42.42);
	Data		*new_ptr;

	new_ptr = deserialize(serialize(old_ptr));

	std::cout << "before: [" GREEN << old_ptr << CLR_COLOR "] serialize[" GREEN << serialize(old_ptr) << CLR_COLOR "]" << std::endl;
	std::cout << "  values: char[" CYAN << old_ptr->getChar() << CLR_COLOR "] int[" CYAN << old_ptr->getInt() << CLR_COLOR "] double[" CYAN << old_ptr->getDouble() << CLR_COLOR "]" << std::endl;
	
	std::cout << "after : [" GREEN << new_ptr << CLR_COLOR "] serialize[" GREEN << serialize(new_ptr) << CLR_COLOR "]" << std::endl;
	std::cout << "  values: char[" CYAN << new_ptr->getChar() << CLR_COLOR "] int[" CYAN << new_ptr->getInt() << CLR_COLOR "] double[" CYAN << new_ptr->getDouble() << CLR_COLOR "]" << std::endl;

	delete old_ptr;

	return 0;
}
