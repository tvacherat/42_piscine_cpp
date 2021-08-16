/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvachera <tvachera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 12:30:11 by tvachera          #+#    #+#             */
/*   Updated: 2021/06/28 13:36:35 by tvachera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
 #define PHONEBOOK_HPP

 #include "Contact.hpp"
 #include <sstream>
 #define PHONEBOOK_SIZE 8

class PhoneBook
{
	private:
		Contact	m_list[PHONEBOOK_SIZE];
		size_t	m_size;
	public:
		PhoneBook();
		void	add_contact();
		void	search(void) const;
		void	display(void) const;
};

std::string	format_nbr(size_t i);
std::string	format_str(std::string str);
void		print_data(std::string str, std::string data);

#endif