/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besellem <besellem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 18:00:11 by besellem          #+#    #+#             */
/*   Updated: 2021/08/18 18:01:09 by besellem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMY_REQUEST_FORM_HPP
# define ROBOTOMY_REQUEST_FORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"
# include "Form.hpp"

class RobotomyRequestForm : public Form
{

	public:
		RobotomyRequestForm(void);
		RobotomyRequestForm(std::string const);
		RobotomyRequestForm(RobotomyRequestForm const &);
		virtual ~RobotomyRequestForm();

		RobotomyRequestForm &	operator=(RobotomyRequestForm const &);

		void						execute(Bureaucrat const &) const;

	private:
		bool					_is_signed;
		const int				_grade2sign;
		const int				_grade2exec;
		const std::string		_name;

};

std::ostream &	operator<<(std::ostream &, RobotomyRequestForm const &);

#endif
