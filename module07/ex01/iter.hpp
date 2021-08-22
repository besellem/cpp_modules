/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besellem <besellem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 17:35:08 by besellem          #+#    #+#             */
/*   Updated: 2021/08/22 18:31:04 by besellem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <cstdlib>

template<typename T>
void	iter(T ar[], size_t size, void (*f)(T &))
{
	for (size_t i = 0; i < size; ++i)
	{
		(*f)(ar[i]);
	}
}

template<typename T>
void	print(T &a)
{
	std::cout << a << std::endl;
}
