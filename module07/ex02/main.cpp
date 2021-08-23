/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besellem <besellem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 17:56:58 by besellem          #+#    #+#             */
/*   Updated: 2021/08/23 18:07:19 by besellem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

#define RED        "\e[1;31m"
#define CLR_COLOR  "\e[0m"

#define MAX_VAL    750


int	main(void)
{
	Array<int>		numbers(MAX_VAL);
	int				*mirror = new int[MAX_VAL];

	srand(time(NULL));
	for (int i = 0; i < MAX_VAL; i++)
	{
		const int	value = rand();
		numbers[i] = value;
		mirror[i] = value;
	}
 
	// SCOPE
	{
		Array<int>	tmp = numbers;
		Array<int>	test(tmp);
	}

	for (int i = 0; i < MAX_VAL; i++)
	{
		if (mirror[i] != numbers[i])
		{
			std::cerr << "didn't save the same value!!" << std::endl;
			return 1;
		}
	}
	
	try
	{
		numbers[-2] = 0;
	}
	catch(const std::exception& e)
	{
		std::cerr << RED "Error: " CLR_COLOR << e.what() << std::endl;
	}

	try
	{
		numbers[MAX_VAL] = 0;
	}
	catch(const std::exception& e)
	{
		std::cerr << RED "Error: " CLR_COLOR << e.what() << std::endl;
	}


	for (int i = 0; i < MAX_VAL; i++)
	{
		numbers[i] = rand();
	}

	// numbers.print();

	delete [] mirror;

	return 0;
}
