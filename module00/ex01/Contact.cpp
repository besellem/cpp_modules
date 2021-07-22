/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besellem <besellem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/21 21:54:06 by besellem          #+#    #+#             */
/*   Updated: 2021/07/22 17:54:27 by besellem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void) {
	
	this->clear();
}

Contact::~Contact(void) {
}


void	Contact::clear(void) {
	
	this->first_name.clear();
	this->last_name.clear();
	this->nickname.clear();
	this->phone_number.clear();
	this->darkest_secret.clear();
}

bool	Contact::is_empty(void) const {

	return (this->first_name.empty() &&
			this->last_name.empty() &&
			this->nickname.empty() &&
			this->phone_number.empty() &&
			this->darkest_secret.empty());
}
