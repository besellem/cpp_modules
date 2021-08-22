/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Template.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besellem <besellem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 17:35:08 by besellem          #+#    #+#             */
/*   Updated: 2021/08/22 18:10:47 by besellem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

template<typename T>
void	swap(T &a, T &b)
{
	T	tmp = a;

	a = b;
	b = tmp;
}

template<typename T>
T const &	min(T const &a, T const &b)
{
	return a < b ? a : b;
}

template<typename T>
T const &	max(T const &a, T const &b)
{
	return a > b ? a : b;
}
