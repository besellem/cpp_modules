/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besellem <besellem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/25 11:21:51 by besellem          #+#    #+#             */
/*   Updated: 2021/07/25 16:31:44 by besellem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void) {
	
	Zombie *ben = newZombie("Ben");
	Zombie *zak = newZombie("Zak");

	randomChump("Joseph");

	zak->announce();

	delete ben;
	randomChump("Arthur");
	delete zak;

	return 0;
}
