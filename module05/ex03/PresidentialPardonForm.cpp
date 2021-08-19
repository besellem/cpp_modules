/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besellem <besellem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 13:55:23 by besellem          #+#    #+#             */
/*   Updated: 2021/08/18 18:32:13 by besellem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) :
	Form("", 25, 5),
	_grade2sign(25),
	_grade2exec(5),
	_name("")
{
}

PresidentialPardonForm::PresidentialPardonForm(std::string const target) :
	Form(target, 25, 5),
	_grade2sign(25),
	_grade2exec(5),
	_name(target)
{
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &ref) :
	Form(ref),
	_is_signed(ref.isSigned()),
	_grade2sign(ref.getGradeToSign()),
	_grade2exec(ref.getGradeToExecute()),
	_name(ref.getName())
{
	*this = ref;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}


void				PresidentialPardonForm::execute(Bureaucrat const &ref) const
{
	if (ref.getGrade() > this->getGradeToExecute())
		throw Form::GradeTooLowException();
	
	std::cout << "[" RED << ref.getName() \
			  << CLR_COLOR "] has been forgiven by Zafod Beeblebrox" << std::endl;
}


PresidentialPardonForm &	PresidentialPardonForm::operator=(PresidentialPardonForm const &ref)
{
	if (this == &ref)
		return *this;
	
	Form::operator=(ref);
	return *this;
}


std::ostream &	operator<<(std::ostream &o, PresidentialPardonForm const &ref)
{
	o << "PresidentialPardonForm " GREEN << ref.getName() << CLR_COLOR ", grade to sign it: " \
	  << GREEN << ref.getGradeToSign() << CLR_COLOR ", grade to execute it: " \
	  << GREEN << ref.getGradeToExecute() << CLR_COLOR ". It is " \
	  << (ref.isSigned() ? "" : "not ") << "signed";
	return o;
}
