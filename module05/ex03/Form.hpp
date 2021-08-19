/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besellem <besellem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 16:24:23 by besellem          #+#    #+#             */
/*   Updated: 2021/08/18 18:31:42 by besellem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{

	public:
		Form(void);
		Form(std::string const &, int, int);
		Form(Form const &);
		virtual ~Form();

		Form &					operator=(Form const &);

		const std::string &		getName(void) const;
		int						getGradeToSign(void) const;
		int						getGradeToExecute(void) const;
		bool					isSigned(void) const;
		
		void					beSigned(Bureaucrat const &);
		virtual void			execute(Bureaucrat const &) const = 0;

	private:
		bool					_is_signed;
		const int				_grade2sign;
		const int				_grade2exec;
		const std::string		_name;

	public:
		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char *	what(void) const throw();
		};

		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char *	what(void) const throw();
		};

};

std::ostream &	operator<<(std::ostream &, Form const &);

#endif
