/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besellem <besellem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 13:02:41 by besellem          #+#    #+#             */
/*   Updated: 2021/08/19 13:34:21 by besellem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(void)
{
}

Intern::Intern(Intern const &ref)
{
	*this = ref;
}

Intern::~Intern()
{
}

Intern &	Intern::operator=(Intern const &ref)
{
	(void)ref;
	return *this;
}


Form *		Intern::makeForm(std::string const &form_name, std::string const &target)
{
	t_lookup	table[3] = {
		{ "presidential pardon", new PresidentialPardonForm(target) },
		{ "robotomy request", new RobotomyRequestForm(target) },
		{ "shrubbery creation", new ShrubberyCreationForm(target )}
	};
	int			last = -1;

	for (int i = 0; i < 3; ++i)
	{
		if (form_name == table[i].name)
		{
			last = i;
			continue ;
		}
		else
			delete table[i].base;
	}

	if (last == -1)
	{
		std::cout << "Intern doesn't find '" RED << form_name << CLR_COLOR "' form" << std::endl;
		return NULL;
	}
	std::cout << "Intern creates a '" GREEN << form_name << CLR_COLOR "'" << std::endl;
	return table[last].base;
}
