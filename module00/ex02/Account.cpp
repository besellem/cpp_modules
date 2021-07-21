/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besellem <besellem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 00:47:38 by besellem          #+#    #+#             */
/*   Updated: 2021/07/22 01:02:45 by besellem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>

Account::Account(int initial_deposit) {
	
}

Account::~Account(void) {
	return ;
}

void	Account::_displayTimestamp(void) {
	const time_t	now = time(NULL);
	const tm		*ltm = localtime(&now);

	std::cout << "[";
	std::cout << 1900 + ltm->tm_year;

	if ((1 + ltm->tm_mon) < 10) { std::cout << "0"; };
	std::cout << 1 + ltm->tm_mon;

	if (ltm->tm_mday < 10) { std::cout << "0"; };
	std::cout << ltm->tm_mday;

	std::cout << "_";

	if ((5 + ltm->tm_hour) < 10) { std::cout << "0"; };
	std::cout << 5 + ltm->tm_hour;

	if ((30 + ltm->tm_min) < 10) { std::cout << "0"; };
	std::cout << 30 + ltm->tm_min;

	if (ltm->tm_sec < 10) { std::cout << "0"; };
	std::cout << ltm->tm_sec;
	
	std::cout << "]";
}
