/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvachera <tvachera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 12:51:07 by tvachera          #+#    #+#             */
/*   Updated: 2021/07/07 12:54:10 by tvachera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Karen::Karen()
{
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Karen::~Karen()
{
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void	Karen::complain(std::string level) const
{
	static	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	static	funcp_t		funcp[4] = {&Karen::_debug, &Karen::_info, &Karen::_warning, &Karen::_error};

	for (size_t i = 0; i < 4; i++)
	{
		if (levels[i] == level)
			return ((this->*(funcp[i]))());
	}
	std::cout << "Level \"" << level << "\" doesnt exist" << std::endl;
}

void	Karen::_debug(void) const
{
	std::cout << "[DEBUG] Debug message" << std::endl;
}

void	Karen::_info(void) const
{
	std::cout << "[INFO] Info message" << std::endl;
}

void	Karen::_warning(void) const
{
	std::cout << "[WARNING] Warning message" << std::endl;
}

void	Karen::_error(void) const
{
	std::cout << "[ERROR] Error message" << std::endl;
}

/* ************************************************************************** */