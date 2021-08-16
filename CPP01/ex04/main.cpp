/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvachera <tvachera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 16:19:21 by tvachera          #+#    #+#             */
/*   Updated: 2021/07/06 19:15:48 by tvachera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

void	replace(std::ifstream & instream, std::ofstream & outstream, std::string s1, std::string s2)
{
	std::string	str;

	while (getline(instream, str))
	{
		if (s1 != s2)
		{
			while (str.find(s1) != std::string::npos)
				str.replace(str.find(s1), s1.size(), s2);
		}
		outstream << str << std::endl;
	}
}

int main(int argc, char const *argv[])
{
	std::ifstream	instream;
	std::ofstream	outstream;

	if (argc != 4)
	{
		std::cerr << "Wrong number of arguments" << std::endl;
		return (1);
	}
	if (!std::string(argv[2]).size() || !std::string(argv[3]).size())
	{
		std::cerr << "One argument is empty" << std::endl;
		return (2);
	}
	instream.open(argv[1]);
	if (!instream)
	{
		std::cerr << "Cannot open " << argv[1] << std::endl;
		return (3);
	}
	outstream.open(std::string(std::string(argv[1]) + std::string(".replace")).c_str());
	if (!outstream)
	{
		std::cerr << "Cannot open " << std::string(std::string(argv[1]) + std::string(".replace")) << std::endl;
		instream.close();
		return (4);
	}
	replace(instream, outstream, std::string(argv[2]), std::string(argv[3]));
	instream.close();
	outstream.close();
	return (0);
}
