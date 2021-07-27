/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besellem <besellem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/21 12:07:20 by besellem          #+#    #+#             */
/*   Updated: 2021/07/26 16:45:18 by besellem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <cstdlib>

# include "Contact.hpp"

# define MAX_ENTRIES   8

/* Colors */
# define GREEN         "\e[1;32m"
# define RED           "\e[1;31m"
# define CLR           "\e[0m"

class	PhoneBook {

	public:

		PhoneBook(void);
		~PhoneBook(void);

		void	search(void) const;
		void	add(void);
		void	exit(void) const;


	private:

		Contact						contacts[MAX_ENTRIES];
		int							_entry_current_index;
		const static unsigned int	_padding;

		void	_get_input_entry(const char *, std::string &) const;
		void	_print_entry(std::string, const char *, const char *) const;
		void	_print_entries(void) const;

};

#endif
