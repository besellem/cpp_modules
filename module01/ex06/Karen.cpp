/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besellem <besellem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/25 19:09:08 by besellem          #+#    #+#             */
/*   Updated: 2021/07/28 16:41:52 by besellem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen(void) {
	
}

Karen::~Karen(void) {
	
}

bool	Karen::complain(std::string level) {

	t_lookup	table[4] = {
		{"DEBUG",   &Karen::_debug},
		{"INFO",    &Karen::_info},
		{"WARNING", &Karen::_warning},
		{"ERROR",   &Karen::_error}
	};
	bool		level_test = false;

	for (int i = 0; i < 4; ++i) {

		if (table[i].str == level) {

			level_test = true;
			
			switch (i) {
				case 0: this->_debug();
				case 1: this->_info();
				case 2: this->_warning();
				case 3: this->_error();
				default: break;
			}
		}
	}
	return level_test;
}

void	Karen::_debug(void) {
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
	std::cout << std::endl;
}

void	Karen::_info(void) {
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl;
	std::cout << std::endl;
}

void	Karen::_warning(void) {
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << std::endl;
	std::cout << std::endl;
}

void	Karen::_error(void) {
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
	std::cout << std::endl;
}
