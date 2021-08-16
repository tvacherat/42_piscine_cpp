/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvachera <tvachera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 12:44:41 by tvachera          #+#    #+#             */
/*   Updated: 2021/06/28 16:54:27 by tvachera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(): m_size(0) {}

void	PhoneBook::add_contact(void)
{
	if (m_size == PHONEBOOK_SIZE)
	{
		std::cout << C_RED << "PhoneBook is full, no entry can be added" << C_RESET << std::endl;
		return ;
	}
	m_list[m_size].init();
	m_size++;
}

void	PhoneBook::search(void) const
{
	std::string			input;
	size_t				index;
	std::stringstream	ss;

	if (m_size == 0)
	{
		std::cout << C_RED << "Phonebook is empty, please fill it" << C_RESET << std::endl;
		return ;
	}
	display();
	std::cout << C_YELLOW << "Please enter the index of the desired contact : " << C_RESET;
	getline(std::cin, input);
	ss << input;
	ss >> index;
	if (input.size() && input.find_first_not_of("0123456789") == std::string::npos && index < m_size)
	{
		std::cout << std::endl;
		print_data("First name: ", m_list[index].get_first_name());
		print_data("Last name: ", m_list[index].get_last_name());
		print_data("Nickname: ", m_list[index].get_nickname());
		print_data("Phone Number: ", m_list[index].get_phone_number());
		print_data("Darkest secret: ", m_list[index].get_darkest_secret());
	}
	else
		std::cout << C_RED << "Wrong index, please try again using SEARCH" << C_RESET << std::endl;
}

void	PhoneBook::display(void) const
{
	std::cout << " " << std::setfill ('_') << std::setw(44) << " " << std::endl;
	std::cout << "|" << std::setfill(' ');
	std::cout << C_CYAN << std::left << std::setw(10) << "Index" << C_RESET << "|";
	std::cout << C_CYAN << std::left << std::setw(10) << "First name" << C_RESET << "|";
	std::cout << C_CYAN << std::left << std::setw(10) << "Last name" << C_RESET << "|";
	std::cout << C_CYAN << std::left << std::setw(10) << "Nickname" << C_RESET << "|" << std::endl;
	std::cout << "|__________|__________|__________|__________| " << std::endl;
	for (size_t i = 0; i < m_size; i++)
	{
		std::cout << "|" << C_YELLOW << std::right << std::setw(10) << format_nbr(i) << C_RESET << "|";
		std::cout << C_YELLOW << std::right << std::setw(10) << format_str(m_list[i].get_first_name()) << C_RESET << "|";
		std::cout << C_YELLOW << std::right << std::setw(10) << format_str(m_list[i].get_last_name()) << C_RESET << "|";
		std::cout << C_YELLOW << std::right << std::setw(10) << format_str(m_list[i].get_nickname()) << C_RESET << "|";
		std::cout << std::endl;
		std::cout << "|__________|__________|__________|__________| " << std::endl;
	}
	std::cout << std::endl;
}

std::string	format_nbr(size_t i)
{
	std::stringstream	ss;
	std::string			str;

	ss << i;
	ss >> str;
	return (format_str(str));
}

std::string	format_str(std::string str)
{
	if (str.size() > 10)
	{
		str.resize(10);
		str[9] = '.';
	}
	return (str);
}

void		print_data(std::string str, std::string data)
{
	std::cout << C_YELLOW;
	std::cout.width(17);
	std::cout << std::right << str << C_RESET;
	std::cout << std::resetiosflags(std::ios::adjustfield); 
	std::cout << data << std::endl;
}