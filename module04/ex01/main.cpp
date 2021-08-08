/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besellem <besellem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 12:21:50 by besellem          #+#    #+#             */
/*   Updated: 2021/08/08 16:51:33 by besellem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

#define ANIMAL_NBR 2

int	main() {

	Animal			*animals[ANIMAL_NBR];
	std::string		str1 = "Hello";
	std::string		str2 = "Hello you";
	std::string		str3 = "Test";


	// Set half to Dog & the other half to Cat
	size_t			i = 0;
	for (; i < (ANIMAL_NBR / 2); ++i) { animals[i] = new Dog(); }
	for (; i < ANIMAL_NBR; ++i)       { animals[i] = new Cat(); }
	
	for (size_t j = 0; j < IDEAS_NBR; ++j) {
		animals[0]->setIdea(j, str1);
		animals[ANIMAL_NBR / 2]->setIdea(j, str2);
	}

	Cat		*ricky = new Cat(dynamic_cast<Cat &>(*animals[ANIMAL_NBR / 2]));
	Cat		rico;
	
	for (size_t j = 0; j < IDEAS_NBR / 10; ++j) { std::cout << "ricky: " << ricky->getIdea(j) << std::endl; }
	rico = *ricky;
	rico.setIdea(0, str3);
	for (size_t j = 0; j < IDEAS_NBR / 10; ++j) { std::cout << "by copy: " << rico.getIdea(j) << std::endl; }
	ricky->setIdea(0, str1);
	rico = Cat(*ricky);
	for (size_t j = 0; j < IDEAS_NBR / 10; ++j) { std::cout << "by ref: " << rico.getIdea(j) << std::endl; }
	
	delete ricky;


	for (i = 0; i < ANIMAL_NBR; ++i) { delete animals[i]; }


	// Test provided by the subject
	const Animal	*dog = new Dog();
	const Animal	*cat = new Cat();

	delete dog;	// should not create a leak
	delete cat;

	return 0;
}
