/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serialize.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besellem <besellem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 05:59:28 by besellem          #+#    #+#             */
/*   Updated: 2021/08/20 06:00:11 by besellem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

uintptr_t		serialize(Data *ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}
