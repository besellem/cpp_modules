/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besellem <besellem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/21 17:45:26 by besellem          #+#    #+#             */
/*   Updated: 2021/07/21 18:22:42 by besellem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main(void) {
	
	PhoneBook	pb;
	char		buffer[ENTRY_LEN_MAX];

	do {
		
		std::cout << "> ";
		std::cin >> buffer;
		
		if (0 == strcmp(buffer, "ADD")) {
			pb.add();
		} else if (0 == strcmp(buffer, "PRINT")) {
			pb.print_entries();
		} else if (0 == strcmp(buffer, "EXIT")) {
			break ;
		} else {
			std::cout << "Don't know this command !" << std::endl;
		}
		
	} while (true);
	
	return (EXIT_SUCCESS);
}
