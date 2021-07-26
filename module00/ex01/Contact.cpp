/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besellem <besellem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/21 21:54:06 by besellem          #+#    #+#             */
/*   Updated: 2021/07/26 16:31:06 by besellem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void) {
	
	this->clear();
}

Contact::~Contact(void) {
}


void	Contact::clear(void) {
	
	this->getFirstName().clear();
	this->getLastName().clear();
	this->getNickname().clear();
	this->getPhoneNumber().clear();
	this->getDarkestSecret().clear();
}

bool	Contact::is_empty(void) const {

	return (this->getFirstName().empty() &&
			this->getLastName().empty() &&
			this->getNickname().empty() &&
			this->getPhoneNumber().empty() &&
			this->getDarkestSecret().empty());
}

std::string		Contact::getFirstName(void) const {
	return this->_first_name;
}

std::string		Contact::getLastName(void) const {
	return this->_last_name;
}

std::string		Contact::getNickname(void) const {
	return this->_nickname;
}

std::string		Contact::getPhoneNumber(void) const {
	return this->_phone_number;
}

std::string		Contact::getDarkestSecret(void) const {
	return this->_darkest_secret;
}

void			Contact::setFirstName(std::string &str) {
	this->_first_name = str;
}

void			Contact::setLastName(std::string &str) {
	this->_last_name = str;
}

void			Contact::setNickname(std::string &str) {
	this->_nickname = str;
}

void			Contact::setPhoneNumber(std::string &str) {
	this->_phone_number = str;
}

void			Contact::setDarkestSecret(std::string &str) {
	this->_darkest_secret = str;
}
