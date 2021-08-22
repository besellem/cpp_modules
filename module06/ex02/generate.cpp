/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   generate.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besellem <besellem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 15:36:59 by besellem          #+#    #+#             */
/*   Updated: 2021/08/22 16:01:18 by besellem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <cstdlib>
#include <ctime>

Base *	generate(void)
{
	std::srand(std::time(NULL));

	int		id = std::rand() % 3;
	
	if (0 == id) return new A();
	if (1 == id) return new B();
	if (2 == id) return new C();

	return NULL;
}
