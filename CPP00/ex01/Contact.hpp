/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvachera <tvachera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 12:29:44 by tvachera          #+#    #+#             */
/*   Updated: 2021/06/28 14:16:06 by tvachera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
 #define CONTACT_HPP

 #include <string>
 #include <iostream>
 #include <iomanip>
 #define C_CYAN "\e[36m"
 #define C_GREEN "\e[32m"
 #define C_RED "\e[31m"
 #define C_YELLOW "\e[33m"
 #define C_RESET "\e[0m"

class Contact
{
	private:
		std::string	m_first_name;
		std::string	m_last_name;
		std::string	m_nickname;
		std::string	m_phone_number;
		std::string	m_darkest_secret;
	public:
		Contact(void);
		void		init(void);
		std::string	get_first_name(void) const;
		std::string	get_last_name(void) const;
		std::string	get_nickname(void) const;
		std::string	get_phone_number(void) const;
		std::string	get_darkest_secret(void) const;
};

#endif