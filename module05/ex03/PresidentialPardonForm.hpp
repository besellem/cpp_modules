/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besellem <besellem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 13:55:25 by besellem          #+#    #+#             */
/*   Updated: 2021/08/18 18:16:21 by besellem         ###   ########.fr       */
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
		PresidentialPardonForm(void);
		PresidentialPardonForm(std::string const);
		PresidentialPardonForm(PresidentialPardonForm const &);
		virtual ~PresidentialPardonForm();

		PresidentialPardonForm &	operator=(PresidentialPardonForm const &);

		void						execute(Bureaucrat const &) const;

	private:
		bool					_is_signed;
		const int				_grade2sign;
		const int				_grade2exec;
		const std::string		_name;

};

std::ostream &	operator<<(std::ostream &, PresidentialPardonForm const &);

#endif
