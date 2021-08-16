/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvachera <tvachera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 12:30:34 by tvachera          #+#    #+#             */
/*   Updated: 2021/08/03 20:12:01 by tvachera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

bool	check(std::string const & str);
bool	convert(std::string const & str);

int main(int argc, char const *argv[])
{
	std::string av;

	if (argc != 2)
	{
		std::cerr << "Error: one argument is required" << std::endl;
		return (1);
	}
	av = argv[1];
	if (av.empty())
	{
		std::cerr << "Error: arg's length is null" << std::endl;
		return (2);
	}
	if (!check(av) || !convert(av))
	{
		std::cerr << "Error: impossible conversion" << std::endl;
		return (3);
	}
	return (0);
}
