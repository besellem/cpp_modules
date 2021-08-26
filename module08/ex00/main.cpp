/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besellem <besellem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 18:21:38 by besellem          #+#    #+#             */
/*   Updated: 2021/08/26 18:37:09 by besellem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

#define RED       "\e[1;31m"
#define GREEN     "\e[1;32m"
#define CLR_COLOR "\e[0m"

template<typename T>
void	try2find(T &container, int val)
{
	bool	tst = easyfind(container, val);

	if (tst) std::cout << "[" << val << "] -> " GREEN "found" CLR_COLOR;
	else     std::cout << "[" << val << "] -> " RED "not found" CLR_COLOR;
	
	std::cout << std::endl;
}

int	main(void)
{
	std::list<int>	lst;

	lst.push_back(1);
	lst.push_back(2);
	lst.push_back(3);
	try2find(lst, -10);
	try2find(lst, 2);
	try2find(lst, 42);
}
