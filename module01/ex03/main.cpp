/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besellem <besellem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/25 15:21:47 by besellem          #+#    #+#             */
/*   Updated: 2021/07/25 16:20:39 by besellem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int	main(void) {
	
	Weapon		club = Weapon("crude spiked club");
	HumanA		bob("Bob", club);

	bob.attack();
	club.setType("some other type of club");
	bob.attack();

	return 0;
}

// int	main(void) {
	
// 	Weapon		club = Weapon("crude spiked club");
// 	HumanB		jim("Jim");

// 	jim.setWeapon(club);
// 	jim.attack();
// 	club.setType("some other type of club");
// 	jim.attack();

// 	return 0;
// }
