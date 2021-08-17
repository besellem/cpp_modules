/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besellem <besellem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 13:55:23 by besellem          #+#    #+#             */
/*   Updated: 2021/08/17 14:39:12 by besellem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(Bureaucrat const &ref) :
	_grade2sign(25),
	_grade2exec(5)
{
	if (ref.getGrade() < this->_grade2sign)
		throw Form::GradeTooHighException();
	else if (this->_grade2sign > 150 || this->_grade2exec > 150)
		throw Form::GradeTooLowException();
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &ref) :
	Form(ref)
{
	// *this = ref;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}


const std::string &	PresidentialPardonForm::getName(void) const
{
	return this->_name;
}

int					PresidentialPardonForm::getGradeToSign(void) const
{
	return this->_grade2sign;
}

int					PresidentialPardonForm::getGradeToExecute(void) const
{
	return this->_grade2exec;
}

bool				PresidentialPardonForm::isSigned(void) const
{
	return this->_is_signed;
}

void				PresidentialPardonForm::beSigned(Bureaucrat const &target)
{
	const int	grade = target.getGrade();

	if (grade > this->getGradeToSign() || grade > this->getGradeToExecute())
	{
		throw Form::GradeTooLowException();
	}
	else
	{
		this->_is_signed = true;
	}
}


PresidentialPardonForm &	PresidentialPardonForm::operator=(PresidentialPardonForm const &ref)
{
	if (this == &ref)
		return *this;

	int			*_grade2sign = (int *)&this->_grade2sign;
	int			*_grade2exec = (int *)&this->_grade2exec;
	std::string	*_name = (std::string *)&this->_name;

	this->_is_signed = ref.isSigned();
	*_grade2sign = ref.getGradeToSign();
	*_grade2exec = ref.getGradeToExecute();
	*_name = ref.getName();

	return *this;
}


// std::ostream &	operator<<(std::ostream &o, PresidentialPardonForm const &ref)
// {
// 	o << "PresidentialPardonForm " GREEN << ref.getName() << CLR_COLOR ", grade to sign it: " \
// 	  << GREEN << ref.getGradeToSign() << CLR_COLOR ", grade to execute it: " \
// 	  << GREEN << ref.getGradeToExecute() << CLR_COLOR ". It is " \
// 	  << (ref.isSigned() ? "" : "not ") << "signed";
// 	return o;
// }
