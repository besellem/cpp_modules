/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besellem <besellem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/21 17:45:26 by besellem          #+#    #+#             */
/*   Updated: 2021/07/22 00:41:27 by besellem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main(void) {
	
	PhoneBook	pb;
	std::string	buffer;
	bool		last_command = true;

	do {
		last_command ? std::cout << GREEN "> " CLR : std::cout << RED "> " CLR;
		std::getline(std::cin, buffer);
		
		last_command = true;
		
		if (std::cin.eof() || buffer == "EXIT") {
			pb.exit();
		} else if (buffer == "ADD") {
			pb.add();
		} else if (buffer == "PRINT") {
			pb.print_entries();
		} else if (buffer == "SEARCH") {
			pb.search();
		} else {
			std::cout << "Don't know this command !" << std::endl;
			last_command = false;
		}

	} while (true);
	
	return (EXIT_SUCCESS);
}
