/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besellem <besellem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/25 11:21:51 by besellem          #+#    #+#             */
/*   Updated: 2021/07/25 15:19:12 by besellem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void) {
	
	int		nbr = 10;
	Zombie *horde = zombieHorde(nbr, "Ben");

	for (int i = 0; i < nbr; ++i) {
		horde[i].announce();
	}
	
	delete [] horde;

	return 0;
}
