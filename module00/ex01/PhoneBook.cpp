/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besellem <besellem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/21 12:07:31 by besellem          #+#    #+#             */
/*   Updated: 2021/07/21 18:24:21 by besellem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void) : _entry_current_index(0) {

	for (int i = 0; i < MAX_ENTRIES; ++i) {
		this->_reset_entry(i);
	}
}

PhoneBook::~PhoneBook(void) {
	return ;
}


void	PhoneBook::_reset_entry(int index) {

	if (!(index >= 0 && index < MAX_ENTRIES))
		return ;
	
	this->_first_name[index]->assign(ENTRY_LEN_MAX, 0);
	this->_last_name[index]->assign(ENTRY_LEN_MAX, 0);
	this->_nickname[index]->assign(ENTRY_LEN_MAX, 0);
	this->_phone_number[index]->assign(ENTRY_LEN_MAX, 0);
	this->_darkest_secret[index]->assign(ENTRY_LEN_MAX, 0);
}

int		PhoneBook::search(std::string searched) const {
	(void)searched;
	return 0;
}

int		PhoneBook::add(void) {

	char	tmp[ENTRY_LEN_MAX + 1] = {0};
	int		i;

	if (MAX_ENTRIES == this->_entry_current_index)
		this->_entry_current_index = 0;

	i = this->_entry_current_index;
	
	std::cout << "Insert the first name : ";
	std::cin >> tmp;
	this->_first_name[i]->copy(tmp, strlen(tmp));

	// std::cout << "Insert the first name : ";
	// std::cin >> tmp;
	// this->_first_name[i]->copy(tmp, strlen(tmp));

	++this->_entry_current_index;

	return 0;
}

void	PhoneBook::exit(void) const {
	std::cout << "Exiting ..." << std::endl;
	std::exit(EXIT_SUCCESS);
}

void	PhoneBook::print_entries(void) const {

	for (int i = 0; i < MAX_ENTRIES; ++i)
	{
		std::cout << this->_first_name[i] << std::endl;
		std::cout << this->_last_name[i] << std::endl;
		std::cout << this->_nickname[i] << std::endl;
		std::cout << this->_phone_number[i] << std::endl;
		std::cout << this->_darkest_secret[i] << std::endl;
	}
}
