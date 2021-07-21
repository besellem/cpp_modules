/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besellem <besellem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/21 12:07:31 by besellem          #+#    #+#             */
/*   Updated: 2021/07/22 00:40:31 by besellem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <string>
#include <iomanip>

PhoneBook::PhoneBook(void) : _entry_current_index(0) {
	return ;
}

PhoneBook::~PhoneBook(void) {
	return ;
}


void	PhoneBook::_get_input_entry(std::string message, int padding, std::string &entry) const {

	std::cout << std::setw(padding) << "" << message;
	std::getline(std::cin, entry);
}

void	PhoneBook::_print_entry(std::string entry, std::string prefix, std::string suffix) const {

	if (!prefix.empty()) { std::cout << prefix; };

	if (!entry.empty()) {
		
		if (entry.size() > PADD_SZ)
			std::cout << entry.substr(0, 9) << ".";
		else
			std::cout << std::setw(PADD_SZ) << entry;
	}
	else
		std::cout << std::setw(PADD_SZ) << "";

	if (!suffix.empty()) { std::cout << suffix; };
}

void	PhoneBook::search(void) const {

	Contact		tmp;
	std::string	buffer;
	char		*ptr = NULL;
	long 		index;

	this->print_entries();

	std::cout << std::endl;

	do {
		this->_get_input_entry("Contact index to display : ", 4, buffer);

		if (std::cin.eof()) {
			std::cout << std::endl;
			this->exit();
		}

		index = strtol(buffer.data(), &ptr, 10);
		if (index < 0 || index >= MAX_ENTRIES || buffer.data() == ptr) {
			std::cout << RED "      Error: " CLR "Please retry" << std::endl;
			continue ;
		}
		
		tmp = this->contacts[index];
		std::cout << std::setw(6) << "" << "first_name :     " << tmp.first_name << std::endl;
		std::cout << std::setw(6) << "" << "last_name :      " << tmp.last_name << std::endl;
		std::cout << std::setw(6) << "" << "nickname :       " << tmp.nickname << std::endl;
		std::cout << std::setw(6) << "" << "phone_number :   " << tmp.phone_number << std::endl;
		std::cout << std::setw(6) << "" << "darkest_secret : " << tmp.darkest_secret << std::endl;
		
		std::cout << std::endl;
		break ;

	} while (true);
}

void	PhoneBook::add(void) {

	std::string	tmp;
	const int	i = this->_entry_current_index;

	this->contacts[i].clear();

	this->_get_input_entry("Enter the first name : ",     4, this->contacts[i].first_name);
	this->_get_input_entry("Enter the last name : ",      4, this->contacts[i].last_name);
	this->_get_input_entry("Enter the nickname : ",       4, this->contacts[i].nickname);
	this->_get_input_entry("Enter the phone number : ",   4, this->contacts[i].phone_number);
	this->_get_input_entry("Enter the darkest secret : ", 4, this->contacts[i].darkest_secret);

	// we only have room for 8 entries so we overwrite the 1st one with the 9th ...
	++this->_entry_current_index;
	if (MAX_ENTRIES == this->_entry_current_index)
		this->_entry_current_index = 0;
}

void	PhoneBook::exit(void) const {
	std::cout << "Exiting ..." << std::endl;
	std::exit(EXIT_SUCCESS);
}

void	PhoneBook::print_entries(void) const {

	// print header
	this->_print_entry("index",      "",  "|");
	this->_print_entry("first name", "",  "|");
	this->_print_entry("last name",  "",  "|");
	this->_print_entry("nickname",   "",   "");
	std::cout << std::endl;

	for (int i = 0; i < MAX_ENTRIES; ++i) {
		
		if (this->contacts[i].is_empty())
			continue ;
		std::cout << std::setw(PADD_SZ) << i;
		this->_print_entry(this->contacts[i].first_name, "|",  "|");
		this->_print_entry(this->contacts[i].last_name,   "",  "|");
		this->_print_entry(this->contacts[i].nickname,    "",   "");
		std::cout << std::endl;
	}
}

void	PhoneBook::reset_entry(int index) {

	if (!(index >= 0 && index < MAX_ENTRIES))
		return ;
	this->contacts[index].clear();
}
