/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besellem <besellem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 18:22:07 by besellem          #+#    #+#             */
/*   Updated: 2021/08/26 18:31:10 by besellem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <algorithm>
#include <map>
#include <list>
#include <stack>
#include <vector>

template<typename T>
bool	easyfind(T container, int val)
{
	return (*std::find(container.begin(), container.end(), val) == val);
}
