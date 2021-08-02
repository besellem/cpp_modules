/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besellem <besellem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/01 16:06:22 by besellem          #+#    #+#             */
/*   Updated: 2021/08/02 17:13:07 by besellem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

int	main(void) {
	
	ClapTrap	franck("Franck");
	ClapTrap	eddie("Eddie");

	franck.attack(eddie.getName());
	franck.takeDamage(10);
	franck.beRepaired(10);

	eddie = ClapTrap("new_name");
	std::cout << eddie.getName() << std::endl;

	return 0;
}
