/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besellem <besellem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/25 16:22:19 by besellem          #+#    #+#             */
/*   Updated: 2021/07/25 21:42:58 by besellem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <iosfwd>
#include <cstring>

int	main(int ac, char **av) {

	if (ac != 4 || std::strlen(av[2]) == 0) {

		std::cout << "usage: ./replace filename string_to_find string_to_replace" << std::endl;
		return (1);
	}

	std::string		content;
	std::string		out_name = av[1];
	out_name.append(".replace");
	
	std::ifstream	ifs;

	ifs.open(av[1]);
	if (ifs.fail()) {
		std::cout << "Error: Cannot open '" << av[1] << "'" << std::endl;
		return 1;
	}

	std::ofstream	ofs;

	ofs.open(out_name);
	if (ofs.fail()) {
		std::cout << "Error: Cannot create '" << out_name << "'" << std::endl;
		ifs.close();
		return 1;
	}

	do {
		
		std::getline(ifs, content);

		if (ifs.eof())
			break ;

		while (true) {

			size_t	idx = content.find(av[2]);
			
			if (idx == std::string::npos) {
				ofs << content;
				break ;
			}
			ofs << content.substr(0, idx) << av[3];
			content = content.substr(idx + std::strlen(av[2]));
		}
		ofs << std::endl;

	} while (true);

	ifs.close();
	ofs.close();

	return 0;	
}
