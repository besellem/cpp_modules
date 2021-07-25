/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besellem <besellem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/25 16:22:19 by besellem          #+#    #+#             */
/*   Updated: 2021/07/25 16:38:37 by besellem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int	main(int ac, char **av) {

	(void)ac;
	(void)av;

	if (ac != 4) {

		std::cout << "usage: filename  string_to_find  string_to_replace" << std::endl;
		return (1);
	}

	std::string		out_name = av[1];
	out_name += ".replace";
	
	std::ifstream	ifs(av[1]);
	std::ofstream	ofs(out_name);
	std::string		content;

	
	// content.find()

	std::cout << out_name << std::endl;



	
	// ifs.close();
	// ofs.close();

	return 0;	
}
