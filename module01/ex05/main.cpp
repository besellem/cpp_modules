/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besellem <besellem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/25 19:43:38 by besellem          #+#    #+#             */
/*   Updated: 2021/07/25 19:44:50 by besellem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int	main(void) {

	Karen	k;

	k.complain("test");
	k.complain("DEBUG");
	k.complain("debug");
	k.complain("INFO");
	k.complain("WARNING");
	k.complain("ERROR");
	return 0;
}
