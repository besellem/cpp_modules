/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besellem <besellem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/21 12:07:20 by besellem          #+#    #+#             */
/*   Updated: 2021/07/22 00:40:55 by besellem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include "Contact.hpp"

# define ENTRY_LEN_MAX 512
# define MAX_ENTRIES   8

# define PADD_SZ       10 /* padding size */

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
		void	print_entries(void) const;
		void	reset_entry(int);


	private:

		Contact	contacts[MAX_ENTRIES];
		int		_entry_current_index;

		void	_get_input_entry(std::string, int, std::string &) const;
		void	_print_entry(std::string, std::string, std::string) const;

};

#endif
