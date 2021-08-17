/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besellem <besellem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 13:55:25 by besellem          #+#    #+#             */
/*   Updated: 2021/08/17 14:25:29 by besellem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIAL_PARDON_FORM_HPP
# define PRESIDENTIAL_PARDON_FORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"
# include "Form.hpp"

class PresidentialPardonForm : public Form
{

	public:
		PresidentialPardonForm(Bureaucrat const &);
		~PresidentialPardonForm();

		PresidentialPardonForm &	operator=(PresidentialPardonForm const &);

		const std::string &		getName(void) const;
		int						getGradeToSign(void) const;
		int						getGradeToExecute(void) const;
		bool					isSigned(void) const;
		
		void					beSigned(Bureaucrat const &);

	private:
		bool					_is_signed;
		const int				_grade2sign;
		const int				_grade2exec;
		const std::string		_name;

};

std::ostream &	operator<<(std::ostream &, PresidentialPardonForm const &);

#endif
