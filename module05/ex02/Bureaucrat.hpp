/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besellem <besellem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 14:48:10 by besellem          #+#    #+#             */
/*   Updated: 2021/08/12 18:26:34 by besellem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include "Form.hpp"

# define RED        "\e[1;31m"
# define GREEN      "\e[1;32m"
# define CLR_COLOR  "\e[0m"

class Form;

class Bureaucrat
{

	public:
		Bureaucrat(std::string const &, int);
		Bureaucrat(Bureaucrat const &);
		~Bureaucrat();

		Bureaucrat &			operator=(Bureaucrat const &);

		const std::string &		getName(void) const;
		int						getGrade(void) const;

		void					lowerGrade(void);
		void					upperGrade(void);
		void					signForm(Form &) const;
	
	private:
		int						_grade;
		std::string				_name;

	public:
		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char *	what() const throw();
		};

		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char *	what() const throw();
		};

};

std::ostream &	operator<<(std::ostream &, Bureaucrat const &);

#endif
