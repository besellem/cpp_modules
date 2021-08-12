/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besellem <besellem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 14:49:26 by besellem          #+#    #+#             */
/*   Updated: 2021/08/12 16:19:16 by besellem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string const &name, int grade) :
	_grade(grade),
	_name(name)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(Bureaucrat const &ref)
{
	*this = ref;
}

Bureaucrat::~Bureaucrat()
{
}


const std::string &		Bureaucrat::getName(void) const
{
	return this->_name;
}

int						Bureaucrat::getGrade(void) const
{
	return this->_grade;
}

void					Bureaucrat::lowerGrade(void)
{
	std::cout << "Lowering " << this->getName() << " position ..." << std::endl;
	
	if (this->getGrade() + 1 > 150)
		throw Bureaucrat::GradeTooLowException();
	this->_grade++;
}

void					Bureaucrat::upperGrade(void)
{
	std::cout << "Raising " << this->getName() << " position ..." << std::endl;
	
	if (this->getGrade() - 1 < 1)
		throw Bureaucrat::GradeTooHighException();
	this->_grade--;
}


Bureaucrat &			Bureaucrat::operator=(Bureaucrat const &ref)
{
	if (this == &ref)
		return *this;
	
	this->_grade = ref.getGrade();
	this->_name = ref.getName();

	return *this;
}


const char *	Bureaucrat::GradeTooHighException::what() const throw()
{
	return RED "Grade too high!" CLR_COLOR;
}

const char *	Bureaucrat::GradeTooLowException::what() const throw()
{
	return RED "Grade too low!" CLR_COLOR;
}

std::ostream &			operator<<(std::ostream &o, Bureaucrat const &ref)
{
	o << GREEN << ref.getName() << CLR_COLOR ", bureaucrat grade " \
	  << GREEN << ref.getGrade() << CLR_COLOR ".";
	return o;
}
