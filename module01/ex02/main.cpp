/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besellem <besellem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/25 14:57:53 by besellem          #+#    #+#             */
/*   Updated: 2021/07/25 15:02:19 by besellem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void) {

	std::string		brain = "HI THIS IS BRAIN";
	std::string		*stringPTR = &brain;
	std::string		&stringREF = brain;


	std::cout << "string address:                " << &brain << std::endl;
	std::cout << "string address by ptr:         " << stringPTR << std::endl;
	std::cout << "string address by refererence: " << &stringREF << std::endl;
	
	std::cout << std::endl;

	std::cout << "string by ptr:         " << *stringPTR << std::endl;
	std::cout << "string by refererence: " << stringREF << std::endl;

	return 0;
}
