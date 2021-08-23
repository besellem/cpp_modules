/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besellem <besellem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 15:31:15 by besellem          #+#    #+#             */
/*   Updated: 2021/08/23 13:23:31 by besellem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ScalarConversion.hpp"

int	main(int ac, char **av)
{
	ScalarConversion	convs;

	if (ac != 2)
	{
		std::cerr << ERROR "wrong number of arguments" << std::endl;
		return 1;
	}

	try
	{
		convs = ScalarConversion(av[1]);
	}
	catch (std::exception &e)
	{
		std::cerr << ERROR << e.what() << std::endl;
		return 1;
	}

	convs.print();

	return 0;
}
