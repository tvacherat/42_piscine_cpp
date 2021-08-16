/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvachera <tvachera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 12:29:37 by tvachera          #+#    #+#             */
/*   Updated: 2021/06/28 14:16:44 by tvachera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void){}

void	Contact::init(void)
{
	std::cout << C_YELLOW << std::setw(17) << std::right << "First name: " << C_RESET;
	getline(std::cin, m_first_name);
	std::cout << C_YELLOW << std::setw(17) << std::right << "Last name: " << C_RESET;
	getline(std::cin, m_last_name);
	std::cout << C_YELLOW << std::setw(17) << std::right << "Nickname: " << C_RESET;
	getline(std::cin, m_nickname);
	std::cout << C_YELLOW << std::setw(17) << std::right << "Phone number: " << C_RESET;
	getline(std::cin, m_phone_number);
	std::cout << C_YELLOW << std::setw(17) << std::right << "Darkest secret: " << C_RESET;
	getline(std::cin, m_darkest_secret);
}

std::string	Contact::get_first_name(void) const
{
	return (m_first_name);
}

std::string	Contact::get_last_name(void) const
{
	return (m_last_name);
}

std::string	Contact::get_nickname(void) const
{
	return (m_nickname);
}

std::string	Contact::get_phone_number(void) const
{
	return (m_phone_number);
}

std::string	Contact::get_darkest_secret(void) const
{
	return (m_darkest_secret);
}