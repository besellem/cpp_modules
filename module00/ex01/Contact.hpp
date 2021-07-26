/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besellem <besellem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/21 21:47:40 by besellem          #+#    #+#             */
/*   Updated: 2021/07/26 16:31:15 by besellem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>

class	Contact {

	public:

		Contact(void);
		~Contact(void);

		void	clear(void);
		bool	is_empty(void) const;

		std::string		getFirstName(void) const;
		std::string		getLastName(void) const;
		std::string		getNickname(void) const;
		std::string		getPhoneNumber(void) const;
		std::string		getDarkestSecret(void) const;

		void			setFirstName(std::string &str);
		void			setLastName(std::string &str);
		void			setNickname(std::string &str);
		void			setPhoneNumber(std::string &str);
		void			setDarkestSecret(std::string &str);

	private:
		std::string		_first_name;
		std::string		_last_name;
		std::string		_nickname;
		std::string		_phone_number;
		std::string		_darkest_secret;

};

#endif
