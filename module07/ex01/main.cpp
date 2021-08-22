/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besellem <besellem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 17:35:35 by besellem          #+#    #+#             */
/*   Updated: 2021/08/22 18:30:31 by besellem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "iter.hpp"

#define SZ 10UL

int	main(void)
{
	int		ar[SZ];
	
	for (size_t i = 0; i < SZ; ++i)
		ar[i] = i;
	
	iter(ar, SZ, print);

	return 0;
}
