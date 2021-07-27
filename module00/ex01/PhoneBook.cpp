/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besellem <besellem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/21 12:07:31 by besellem          #+#    #+#             */
/*   Updated: 2021/07/26 16:46:23 by besellem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <string>
#include <iomanip>

const unsigned int	PhoneBook::_padding = 10;

PhoneBook::PhoneBook(void) : _entry_current_index(0) {
	
	for (int i = 0; i < MAX_ENTRIES; ++i) {
		this->contacts[i].clear();
	}
}

PhoneBook::~PhoneBook(void) {
	return ;
}


void	PhoneBook::_get_input_entry(const char *message, std::string &entry) const {

	if (!message)
		return ;
	std::cout << std::setw(4) << "" << message;
	std::getline(std::cin, entry);
}

void	PhoneBook::_print_entry(std::string entry, const char *prefix, const char *suffix) const {

	if (prefix) { std::cout << prefix; };

	if (!entry.empty()) {
		
		if (entry.size() > this->_padding)
			std::cout << entry.substr(0, 9) << ".";
		else
			std::cout << std::setw(this->_padding) << entry;
	}
	else
		std::cout << std::setw(this->_padding) << "";

	if (suffix) { std::cout << suffix; };
}

void	PhoneBook::_print_entries(void) const {

	// Print header
	this->_print_entry("index",      "",  "|");
	this->_print_entry("first name", "",  "|");
	this->_print_entry("last name",  "",  "|");
	this->_print_entry("nickname",   "",   "");
	std::cout << std::endl;

	for (int i = 0; i < MAX_ENTRIES; ++i) {
		
		if (this->contacts[i].is_empty())
			continue ;
		std::cout << std::setw(this->_padding) << i;
		this->_print_entry(this->contacts[i].getFirstName(), "|",  "|");
		this->_print_entry(this->contacts[i].getLastName(),   "",  "|");
		this->_print_entry(this->contacts[i].getNickname(),   "",   "");
		std::cout << std::endl;
	}
}

void	PhoneBook::search(void) const {

	Contact		contact;
	std::string	buffer;
	long 		index;
	char		*ptr = NULL;

	this->_print_entries();
	std::cout << std::endl;

	do {
		this->_get_input_entry("Contact index to display : ", buffer);

		if (std::cin.eof()) {
			std::cout << std::endl;
			this->exit();
		}

		index = std::strtol(buffer.data(), &ptr, 10);

		if (index < 0 || index >= MAX_ENTRIES || buffer.data() == ptr) {
			std::cout << RED "      Error: " CLR "Please retry" << std::endl;
			continue ;
		}
		else if (this->contacts[index].is_empty()) {
			std::cout << RED "      Error: " CLR "This contact is empty" << std::endl;
			continue ;
		}

		contact = this->contacts[index];
		std::cout << std::setw(6) << "" << "first_name :     " << contact.getFirstName() << std::endl;
		std::cout << std::setw(6) << "" << "last_name :      " << contact.getLastName() << std::endl;
		std::cout << std::setw(6) << "" << "nickname :       " << contact.getNickname() << std::endl;
		std::cout << std::setw(6) << "" << "phone_number :   " << contact.getPhoneNumber() << std::endl;
		std::cout << std::setw(6) << "" << "darkest_secret : " << contact.getDarkestSecret() << std::endl;
		
		std::cout << std::endl;
		break ;

	} while (true);
}

void	PhoneBook::add(void) {

	std::string	tmp;
	const int	i = this->_entry_current_index;

	this->contacts[i].clear();

	this->contacts[0].getDarkestSecret();

	this->_get_input_entry("Enter the first name : ", tmp);
	this->contacts[i].setFirstName(tmp);
	this->_get_input_entry("Enter the last name : ", tmp);
	this->contacts[i].setLastName(tmp);
	this->_get_input_entry("Enter the nickname : ", tmp);
	this->contacts[i].setNickname(tmp);
	this->_get_input_entry("Enter the phone number : ", tmp);
	this->contacts[i].setPhoneNumber(tmp);
	this->_get_input_entry("Enter the darkest secret : ", tmp);
	this->contacts[i].setDarkestSecret(tmp);

	// we only have room for 8 entries so we overwrite the 1st one with the 9th ...
	++this->_entry_current_index;
	if (MAX_ENTRIES == this->_entry_current_index)
		this->_entry_current_index = 0;
}

void	PhoneBook::exit(void) const {
	std::cout << "Exiting ..." << std::endl;
	std::exit(EXIT_SUCCESS);
}
