/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deserialize.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besellem <besellem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 05:59:24 by besellem          #+#    #+#             */
/*   Updated: 2021/08/20 06:00:41 by besellem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data *			deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data *>(raw);
}
