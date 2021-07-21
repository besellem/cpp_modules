/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besellem <besellem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/21 12:07:20 by besellem          #+#    #+#             */
/*   Updated: 2021/07/21 18:17:53 by besellem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>

# define ENTRY_LEN_MAX 512
# define MAX_ENTRIES   8

class	PhoneBook {

	public:

		PhoneBook(void);
		~PhoneBook(void);

		int		search(std::string) const;
		int		add(void);
		void	exit(void) const;
		void	print_entries(void) const;


	private:

		int		_entry_current_index;

		std::string		_first_name[MAX_ENTRIES][ENTRY_LEN_MAX];
		std::string		_last_name[MAX_ENTRIES][ENTRY_LEN_MAX];
		std::string		_nickname[MAX_ENTRIES][ENTRY_LEN_MAX];
		std::string		_phone_number[MAX_ENTRIES][ENTRY_LEN_MAX];
		std::string		_darkest_secret[MAX_ENTRIES][ENTRY_LEN_MAX];

		void	_reset_entry(int index);
		int		_check_entry(std::string s);

};

#endif
