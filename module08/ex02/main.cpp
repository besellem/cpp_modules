/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besellem <besellem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 17:22:02 by besellem          #+#    #+#             */
/*   Updated: 2021/08/31 18:17:16 by besellem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "MutantStack.hpp"

#define GREEN     "\e[1;32m"
#define CLR_COLOR "\e[0m"


int	main(void)
{
	MutantStack<int>	mstack;

	mstack.push(5);
	mstack.push(17);
	
	std::cout << "top:  [" GREEN << mstack.top() << CLR_COLOR "]" << std::endl;
	mstack.pop();
	std::cout << "size: [" GREEN << mstack.size() << CLR_COLOR "]" << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...] mstack.push(0);

	MutantStack<int>::iterator	it = mstack.begin();
	MutantStack<int>::iterator	ite = mstack.end();

	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	
	std::stack<int>		s(mstack);
	
	return 0;
}
