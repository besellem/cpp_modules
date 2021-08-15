/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besellem <besellem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 16:24:15 by besellem          #+#    #+#             */
/*   Updated: 2021/08/15 11:55:31 by besellem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string const &name, int grade2sign, int grade2exec) :
	_is_signed(false),
	_grade2sign(grade2sign),
	_grade2exec(grade2exec),
	_name(name)
{
	if (grade2sign < 1 || grade2exec < 1)
		throw Form::GradeTooHighException();
	else if (grade2sign > 150 || grade2exec > 150)
		throw Form::GradeTooLowException();
}

Form::Form(Form const &ref) :
	_is_signed(ref.isSigned()),
	_grade2sign(ref.getGradeToSign()),
	_grade2exec(ref.getGradeToExecute()),
	_name(ref.getName())
{
	// *this = ref;
}

Form::~Form()
{
}


const std::string &		Form::getName(void) const
{
	return this->_name;
}

int						Form::getGradeToSign(void) const
{
	return this->_grade2sign;
}

int						Form::getGradeToExecute(void) const
{
	return this->_grade2exec;
}

bool					Form::isSigned(void) const
{
	return this->_is_signed;
}

void					Form::beSigned(Bureaucrat const &target)
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


Form &					Form::operator=(Form const &ref)
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


const char *			Form::GradeTooHighException::what(void) const throw()
{
	return RED "Grade too high!" CLR_COLOR;
}

const char *			Form::GradeTooLowException::what(void) const throw()
{
	return RED "Grade too low!" CLR_COLOR;
}

std::ostream &			operator<<(std::ostream &o, Form const &ref)
{
	o << "Form " GREEN << ref.getName() << CLR_COLOR ", grade to sign it: " \
	  << GREEN << ref.getGradeToSign() << CLR_COLOR ", grade to execute it: " \
	  << GREEN << ref.getGradeToExecute() << CLR_COLOR ". It is " \
	  << (ref.isSigned() ? "" : "not") << " signed";
	return o;
}
