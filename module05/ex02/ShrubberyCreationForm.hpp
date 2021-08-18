/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besellem <besellem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 18:17:04 by besellem          #+#    #+#             */
/*   Updated: 2021/08/18 18:17:38 by besellem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERY_CREATION_FORM_HPP
# define SHRUBBERY_CREATION_FORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"
# include "Form.hpp"

class ShrubberyCreationForm : public Form
{

	public:
		ShrubberyCreationForm(void);
		ShrubberyCreationForm(std::string const);
		ShrubberyCreationForm(ShrubberyCreationForm const &);
		virtual ~ShrubberyCreationForm();

		ShrubberyCreationForm &	operator=(ShrubberyCreationForm const &);

		void						execute(Bureaucrat const &) const;

	private:
		bool					_is_signed;
		const int				_grade2sign;
		const int				_grade2exec;
		const std::string		_name;

};

std::ostream &	operator<<(std::ostream &, ShrubberyCreationForm const &);

#endif
