/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvachera <tvachera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 17:46:29 by tvachera          #+#    #+#             */
/*   Updated: 2021/06/23 20:14:18 by tvachera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "PhoneBook.hpp"
#include "Contact.hpp"

int main(void)
{
	PhoneBook	pb;
	std::string	input;

	std::cout << C_YELLOW << "Welcome to my awesome PhoneBook !" << std::endl;
	std::cout << "Please enter a command (ADD | SEARCH | EXIT)" << C_RESET << std::endl;
	while (42)
	{
		std::cout << "> ";
		getline(std::cin, input);
		if (input == "EXIT")
			break ;
		else if (input == "ADD")
			pb.add_contact();
		else if (input == "SEARCH")
			pb.search();
	}
	return (0);
}
