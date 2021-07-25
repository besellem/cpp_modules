/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besellem <besellem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/25 19:43:38 by besellem          #+#    #+#             */
/*   Updated: 2021/07/25 21:42:38 by besellem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int	main(int ac, char **av) {

	Karen	karen;

	if (ac != 2) {
		std::cout << "usage: ./karenFilter log_level" << std::endl;
		return 1;
	}

	if (false == karen.complain(av[1]))
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;

	return 0;
}
