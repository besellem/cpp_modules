/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besellem <besellem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 12:21:50 by besellem          #+#    #+#             */
/*   Updated: 2021/08/05 15:12:51 by besellem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

#define ANIMAL_NBR 10

int	main() {

	// Animal			*animals[ANIMAL_NBR];
	
	// size_t			i = 0;
	// for (; i < (ANIMAL_NBR / 2); ++i) { animals[i] = new Dog(); }
	// for (; i < ANIMAL_NBR; ++i)       { animals[i] = new Cat(); }
	

	// for (size_t j = 0; j < IDEAS_NBR; ++j) {
	// 	animals[0]->setIdea(j, "bonjour");
	// 	animals[ANIMAL_NBR / 2]->setIdea(j, "bonjour toi");
	// }

	// Cat		*ricky = new Cat(dynamic_cast<Cat &>(*animals[ANIMAL_NBR / 2]));
	// Cat		rico;
	
	// rico = *ricky;
	// for (size_t j = 0; j < IDEAS_NBR / 10; ++j) { std::cout << "by copy: " << rico.getIdea(i) << std::endl; }
	// rico = Cat(*ricky);
	// for (size_t j = 0; j < IDEAS_NBR / 10; ++j) { std::cout << "by ref: " << rico.getIdea(i) << std::endl; }
	// delete ricky;

	// Dog		*ricky = new Dog(dynamic_cast<Dog &>(*animals[0]));
	// Dog		rico = Dog(*ricky);
	// for (size_t j = 0; j < IDEAS_NBR; ++j) { std::cout << "cpy: " << rico.getIdea(i) << std::endl; }
	// delete ricky;

	// for (i = 0; i < ANIMAL_NBR; ++i) { animals[i]->Animal::~Animal(); }
	// for (i = 0; i < ANIMAL_NBR; ++i) { delete animals[i]; }

	const Animal	*dog = new Dog();
	const Animal	*cat = new Cat();

	delete dog;	// should not create a leak
	delete cat;

	return 0;
}
