/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvachera <tvachera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 20:12:24 by tvachera          #+#    #+#             */
/*   Updated: 2021/08/04 21:18:20 by tvachera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <climits>
#include <iomanip>
#include <cerrno>
#include <cfloat>
#include <cstdlib>
#include <math.h>

bool	is_char(std::string const & str);
bool	is_int(std::string const & str);
bool	is_float(std::string const & str);
bool	is_double(std::string const & str);

void	to_char(std::string const & str)
{
	char	c = str[0];

	std::cout << "char: '" << c << "'" << std::endl;
	std::cout << "int: " << static_cast<int>(c) << std::endl;
	std::cout << "float: " << static_cast<float>(c) << ".0f" << std::endl;
	std::cout << "double: " << static_cast<double>(c) << ".0" << std::endl;
}

bool	to_int(std::string const & str)
{
	long int	l = strtol(str.data(), NULL, 10);
	int			i;

	if (l > INT_MAX || l < INT_MIN)
	{
		std::cerr << "Error: int value out of range" << std::endl;
		return (false);
	}
	i = atoi(str.data());
	if (i > CHAR_MAX || i < CHAR_MIN)
		std::cout << "char: impossible" << std::endl;
	else if (!isprint(static_cast<char>(i)))
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: '" << static_cast<char>(i) << "'" << std::endl;
	std::cout << "int: " << i << std::endl;
	std::cout << "float: " << static_cast<float>(i) << ".0f" << std::endl;
	std::cout << "double: " << static_cast<double>(i) << ".0" << std::endl;
	return (true);
}

bool	to_float(std::string const & str)
{
	double	d = strtod(str.data(), NULL);
	float	f;

	(void)d;
	if (errno == ERANGE)
	{
		std::cerr << "Error: float value out of range" << std::endl;
		return (false);
	}
	f = atof(str.data());
	if (static_cast<int>(f) > CHAR_MAX || static_cast<int>(f) < CHAR_MIN)
		std::cout << "char: impossible" << std::endl;
	else if (!isprint(static_cast<char>(f)))
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: '" << static_cast<char>(f) << "'" << std::endl;
	if (static_cast<long>(f) > INT_MAX || static_cast<long>(f) < INT_MIN)
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(f) << std::endl;
	if (fmod(f, 1)) // not perfect
	{
		std::cout << "float: " << f << "f" << std::endl;
		std::cout << "double: " << static_cast<double>(f) << std::endl;
	}
	else
	{
		std::cout << "float: " << f << ".0f" << std::endl;
		std::cout << "double: " << static_cast<double>(f) << ".0" << std::endl;
	}
	return (true);
}

bool	to_double(std::string const & str)
{
	double	d = strtod(str.data(), NULL);

	if (errno == ERANGE)
	{
		std::cerr << "Error: double value out of range" << std::endl;
		return (false);
	}
	if (static_cast<int>(d) > CHAR_MAX || static_cast<int>(d) < CHAR_MIN)
		std::cout << "char: impossible" << std::endl;
	else if (!isprint(static_cast<char>(d)))
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: '" << static_cast<char>(d) << "'" << std::endl;
	if (static_cast<long>(d) > INT_MAX || static_cast<long>(d) < INT_MIN)
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(d) << std::endl;
	if (fmod(static_cast<float>(d), 1))
		std::cout << "float: " << static_cast<float>(d) << "f" << std::endl;
	else
		std::cout << "float: " << static_cast<float>(d) << ".0f" << std::endl;
	if (fmod(d, 1))
		std::cout << "double: " << d << std::endl;
	else
		std::cout << "double: " << d << ".0" << std::endl;
	return (true);
}

bool	convert(std::string const & str)
{
	if (is_char(str))
	{
		to_char(str);
		return (true);
	}
	else if (is_int(str))
		return (to_int(str));
	else if (is_float(str))
	{
		if (str == "nanf" || str == "+inff" || str == "-inff")
		{
			std::cout << "char: impossible" << std::endl;
			std::cout << "int: impossible" << std::endl;
			std::cout << "float: " << str << std::endl;
			std::cout << "double: " << str.substr(0, str.length() - 1) << std::endl;
			return (true);
		}
		return (to_float(str));
	}
	else
	{
		if (str == "nan" || str == "+inf" || str == "-inf")
		{
			std::cout << "char: impossible" << std::endl;
			std::cout << "int: impossible" << std::endl;
			std::cout << "float: " << str << "f" << std::endl;
			std::cout << "double: " << str << std::endl;
			return (true);
		}
		return (to_double(str));
	}
}