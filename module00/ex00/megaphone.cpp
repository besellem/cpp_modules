/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besellem <besellem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 13:46:21 by besellem          #+#    #+#             */
/*   Updated: 2021/07/21 17:52:13 by besellem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

char	*to_upper(char *s)
{
	for (int i = 0; s[i]; ++i) {
		s[i] = toupper(s[i]);
	}
	return (s);
}

int		main(int ac, char **av) {
	if (1 == ac)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	
	for (int i = 1; i < ac; ++i) {
		std::cout << to_upper(av[i]);
	}
	std::cout << std::endl;
	return (0);
}
