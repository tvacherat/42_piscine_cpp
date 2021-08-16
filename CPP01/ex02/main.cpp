/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvachera <tvachera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 14:48:22 by tvachera          #+#    #+#             */
/*   Updated: 2021/07/06 14:53:05 by tvachera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#define C_YELLOW "\e[33m"
#define C_RESET "\e[0m"

int main()
{
	std::string	str("HI THIS IS BRAIN");
	std::string	*stringPTR = &str;
	std::string	&stringREF = str;

	std::cout << C_YELLOW << "Displaying str by using stringPTR: " << C_RESET << *stringPTR << std::endl;
	std::cout << C_YELLOW << "Displaying str by using stringREF: " << C_RESET << stringREF << std::endl;

	return 0;
}
