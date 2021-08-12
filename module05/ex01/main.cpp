/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besellem <besellem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 12:21:50 by besellem          #+#    #+#             */
/*   Updated: 2021/08/12 16:20:33 by besellem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"

int	main(void)
{
	try
	{
		Bureaucrat		paul = Bureaucrat("Paul", 1);
		std::cout << paul << std::endl;
		paul.lowerGrade();
		std::cout << paul << std::endl;
		paul.upperGrade();
		std::cout << paul << std::endl;
		paul.upperGrade();
		std::cout << paul << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	
	
	try
	{
		Bureaucrat		paul = Bureaucrat("Paul", 150);
		std::cout << paul << std::endl;
		paul.upperGrade();
		std::cout << paul << std::endl;
		paul.lowerGrade();
		std::cout << paul << std::endl;
		paul.lowerGrade();
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	
	
	try
	{
		Bureaucrat		paul = Bureaucrat("Paul", 0);
		std::cout << paul << std::endl;
		paul.lowerGrade();
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	
	
	try
	{
		Bureaucrat		paul = Bureaucrat("Paul", 151);
		std::cout << paul << std::endl;
		paul.upperGrade();
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	return 0;
}
