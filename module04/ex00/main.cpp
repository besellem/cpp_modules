/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besellem <besellem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 12:21:50 by besellem          #+#    #+#             */
/*   Updated: 2021/08/05 12:15:20 by besellem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongDog.hpp"
#include "WrongCat.hpp"

int	main() {
	const Animal		*meta = new Animal();
	const Animal		*j = new Dog();
	const Animal		*i = new Cat();
	
	const WrongAnimal	*k = new WrongDog();
	const WrongAnimal	*l = new WrongCat();
	
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();		// will output the cat sound!
	j->makeSound();
	meta->makeSound();


	std::cout << k->getType() << " " << std::endl;
	std::cout << l->getType() << " " << std::endl;
	k->makeSound();
	l->makeSound();

	delete meta;
	delete i;
	delete j;
	delete k;
	delete l;

	return 0;
}
