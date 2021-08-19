/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besellem <besellem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 13:02:46 by besellem          #+#    #+#             */
/*   Updated: 2021/08/19 13:29:08 by besellem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include "Form.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

class Form;

class Intern
{

	public:
		Intern(void);
		Intern(Intern const &);
		virtual ~Intern();

		Intern &	operator=(Intern const &);

		Form *		makeForm(std::string const &, std::string const &);

};


typedef	struct		s_lookup {
	std::string		name;
	Form			*base;
}					t_lookup;

#endif
