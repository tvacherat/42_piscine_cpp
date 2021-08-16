/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvachera <tvachera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 12:49:35 by tvachera          #+#    #+#             */
/*   Updated: 2021/06/22 15:17:32 by tvachera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main(int argc, char const *argv[])
{
	int			i;
	std::string	str;

	i = 1;
	if (argc > 1)
	{
		while (i < argc)
		{
			str.assign(argv[i]);
			for (size_t j = 0; j < str.length(); j++)
				str[j] = ::toupper(str[j]);
			std::cout << str;
			i++;
		}
		std::cout << std::endl;
	}
	else
		std::cout << "* LOUD AND UBEARABLE FEEDBACK NOISE *" << std::endl;
	return (0);
}
