/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besellem <besellem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 12:21:50 by besellem          #+#    #+#             */
/*   Updated: 2021/08/19 13:33:45 by besellem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int	main(void)
{
	Intern	someRandomIntern;
	Form	*rrf;

	rrf = someRandomIntern.makeForm("presidential pardon", "Bender");
	rrf->execute(Bureaucrat("bob", 1));
	delete rrf;

	rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	rrf->execute(Bureaucrat("phil", 1));
	delete rrf;

	rrf = someRandomIntern.makeForm("shrubbery creation", "Bender");
	rrf->execute(Bureaucrat("lucas", 1));
	delete rrf;

	rrf = someRandomIntern.makeForm("not existing", "Bender");

	return 0;
}
