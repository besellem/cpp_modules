/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besellem <besellem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 18:00:08 by besellem          #+#    #+#             */
/*   Updated: 2021/08/18 18:31:47 by besellem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) :
	Form("", 72, 45),
	_grade2sign(72),
	_grade2exec(45),
	_name("")
{
}

RobotomyRequestForm::RobotomyRequestForm(std::string const target) :
	Form(target, 72, 45),
	_grade2sign(72),
	_grade2exec(45),
	_name(target)
{
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &ref) :
	Form(ref),
	_is_signed(ref.isSigned()),
	_grade2sign(ref.getGradeToSign()),
	_grade2exec(ref.getGradeToExecute()),
	_name(ref.getName())
{
	*this = ref;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}


void				RobotomyRequestForm::execute(Bureaucrat const &ref) const
{
	if (ref.getGrade() > this->getGradeToExecute())
		throw Form::GradeTooLowException();

	std::srand(std::time(NULL));

	std::cout << "*drill noises*" << std::endl;
	std::cout << "[" RED << ref.getName() << "] " CLR_COLOR;

	if (std::rand() % 2 == 0)
	{
		std::cout << "failed to be robotomized. We'll succeed next time !" << std::endl;
	}
	else
	{
		std::cout << "has been robotomized !" << std::endl;
	}
}


RobotomyRequestForm &	RobotomyRequestForm::operator=(RobotomyRequestForm const &ref)
{
	if (this == &ref)
		return *this;
	
	Form::operator=(ref);
	return *this;
}


std::ostream &	operator<<(std::ostream &o, RobotomyRequestForm const &ref)
{
	o << "RobotomyRequestForm " GREEN << ref.getName() << CLR_COLOR ", grade to sign it: " \
	  << GREEN << ref.getGradeToSign() << CLR_COLOR ", grade to execute it: " \
	  << GREEN << ref.getGradeToExecute() << CLR_COLOR ". It is " \
	  << (ref.isSigned() ? "" : "not ") << "signed";
	return o;
}
