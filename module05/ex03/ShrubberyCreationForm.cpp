/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besellem <besellem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 18:17:54 by besellem          #+#    #+#             */
/*   Updated: 2021/08/18 19:00:36 by besellem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>
#include <iosfwd>
#include <cstring>

ShrubberyCreationForm::ShrubberyCreationForm(void) :
	Form("", 145, 137),
	_grade2sign(145),
	_grade2exec(137),
	_name("")
{
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const target) :
	Form(target, 145, 137),
	_grade2sign(145),
	_grade2exec(137),
	_name(target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &ref) :
	Form(ref),
	_is_signed(ref.isSigned()),
	_grade2sign(ref.getGradeToSign()),
	_grade2exec(ref.getGradeToExecute()),
	_name(ref.getName())
{
	*this = ref;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}


void				ShrubberyCreationForm::execute(Bureaucrat const &ref) const
{
	const char	*tree[] = {
		"               ,@@@@@@@,\n",
		"       ,,,.   ,@@@@@@/@@,  .oo8888o.\n",
		"    ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o\n",
		"   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'\n",
		"   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'\n",
		"   %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'\n",
		"   `&%\\ ` /%&'    |.|        \\ '|8'\n",
		"       |o|        | |         | |\n",
		"       |.|        | |         | |\n",
		"    \\\\/ ._\\//_/__/  ,\\_//__\\\\/.  \\_//__/_\n",
		NULL
	};

	if (ref.getGrade() > this->getGradeToExecute())
		throw Form::GradeTooLowException();
	
	std::ofstream	ofs;
	
	ofs.open(ref.getName() + "_shrubbery");
	if (ofs.fail())
	{
		std::cerr << "Cannot create '" << (ref.getName() + "_shrubbery") << "'" << std::endl;
		return ;
	}
	
	for (size_t i = 0; tree[i]; i++)
		ofs << tree[i];
	ofs.close();
}


ShrubberyCreationForm &	ShrubberyCreationForm::operator=(ShrubberyCreationForm const &ref)
{
	if (this == &ref)
		return *this;
	
	Form::operator=(ref);
	return *this;
}


std::ostream &	operator<<(std::ostream &o, ShrubberyCreationForm const &ref)
{
	o << "ShrubberyCreationForm " GREEN << ref.getName() << CLR_COLOR ", grade to sign it: " \
	  << GREEN << ref.getGradeToSign() << CLR_COLOR ", grade to execute it: " \
	  << GREEN << ref.getGradeToExecute() << CLR_COLOR ". It is " \
	  << (ref.isSigned() ? "" : "not ") << "signed";
	return o;
}
