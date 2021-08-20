/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConversion.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besellem <besellem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 02:31:45 by besellem          #+#    #+#             */
/*   Updated: 2021/08/20 05:51:41 by besellem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <iomanip>
# include <climits>
# include <cmath>

# define RED        "\e[1;31m"
# define GREEN      "\e[1;32m"
# define CLR_COLOR  "\e[0m"

# define ERROR      RED "Error: " CLR_COLOR

class ScalarConversion
{

	public:
		ScalarConversion(void);
		ScalarConversion(std::string const &);
		ScalarConversion(ScalarConversion const &);
		~ScalarConversion() {}

		ScalarConversion &	operator=(ScalarConversion const &);

		char				getChar(void) const;
		int					getInt(void) const;
		float				getFloat(void) const;
		double				getDouble(void) const;

		bool				isSpecial(void) const;

		void				print(void) const;

	private:
		double				_d;

	public:

		class NonDisplayableConversion : public std::exception
		{
			const char *	what(void) const throw() { return "non displayable"; }
		};
		
		class ImpossibleConversion : public std::exception
		{
			const char *	what(void) const throw() { return "impossible"; }
		};

};
