/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvachera <tvachera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 20:02:43 by tvachera          #+#    #+#             */
/*   Updated: 2021/08/03 20:06:52 by tvachera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

bool	is_char(std::string const & str)
{
	if (str.length() != 1 || isdigit(str[0]))
		return (false);
	return (true);
}

bool	is_int(std::string const & str)
{
	size_t	i = 0;

	if (str.find('-') != std::string::npos && (str.find('-') != str.rfind('-')
		|| str.find('-') != 0))
		return (false);
	while (i < str.length())
	{
		if (!isdigit(str[i]) && str[i] != '-')
			return (false);
		i++;
	}
	return (true);
}

bool	is_float(std::string const & str)
{
	size_t	i = 0;

	if (str == "-inff" || str == "+inff" || str == "nanf")
		return (true);
	if (str.find('.') == std::string::npos
		|| str.find('.') == 0 || str.find('.') == str.length() - 1
		|| str.find('.') != str.rfind('.')
		|| str.find('f') != str.length() - 1)
		return (false);
	if (str.find('-') != std::string::npos && (str.find('-') != str.rfind('-')
		|| str.find('-') != 0))
		return (false);
	while (i < str.length() - 1)
	{
		if (!isdigit(str[i]) && str[i] != '-' && str[i] != '.')
			return (false);
		i++;
	}
	return (true);
}

bool	is_double(std::string const & str)
{
	size_t	i = 0;

	if (str == "-inf" || str == "+inf" || str == "nan")
		return (true);
	if (str.find('.') == std::string::npos
		|| str.find('.') == 0 || str.find('.') == str.length() - 1
		|| str.find('.') != str.rfind('.'))
		return (false);
	if (str.find('-') != std::string::npos && (str.find('-') != str.rfind('-')
		|| str.find('-') != 0))
		return (false);
	while (i < str.length() - 1)
	{
		if (!isdigit(str[i]) && str[i] != '-' && str[i] != '.')
			return (false);
		i++;
	}
	return (true);
}

bool	check(std::string const & str)
{
	return (is_char(str) || is_int(str) || is_float(str) || is_double(str));
}