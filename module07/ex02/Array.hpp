/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besellem <besellem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 18:33:40 by besellem          #+#    #+#             */
/*   Updated: 2021/08/22 18:53:25 by besellem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

template<typename T>
class Array
{
	
	public:
		Array(void);
		~Array();
	
	private:
		T	*_array;
	
};
