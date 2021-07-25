/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besellem <besellem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/25 15:04:50 by besellem          #+#    #+#             */
/*   Updated: 2021/07/25 15:16:14 by besellem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name) {
	
	Zombie	*zb = new Zombie[N];

	for (int i = 0; i < N; ++i) {
		zb[i].set_name(name);
	}
	return zb;
}
