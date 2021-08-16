/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvachera <tvachera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 12:08:50 by tvachera          #+#    #+#             */
/*   Updated: 2021/08/16 14:49:25 by tvachera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <algorithm>

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Span::Span(): m_max(0)
{
}

Span::Span( const Span & src ): m_max(src.m_max), m_list(src.m_list)
{
}

Span::Span( unsigned int n): m_max(n)
{
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Span::~Span()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Span &				Span::operator=( Span const & rhs )
{
	static_cast<void>(rhs);
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Span const & i )
{
	std::vector<int>	list = i.getList();

	for (std::vector<int>::iterator it = list.begin(); it != list.end(); it++)
	{
		std::cout << *it;
		if (it + 1 != list.end())
			std::cout << " ; ";
	}
	return o;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void	Span::addNumber(int const nb)
{
	if (m_list.size() >= m_max)
		throw SizeMaxReachedException();
	m_list.push_back(nb);
}

unsigned int	Span::shortestSpan(void) const
{
	if (!m_list.size())
		throw NoNumberException();
	else if (m_list.size() == 1)
		throw LonelyNumberException();
	std::vector<int>	list(m_list);
	unsigned int		span = longestSpan();

	std::sort(list.begin(), list.end());
	for (std::vector<int>::iterator i = list.begin(); i < list.end() - 1; i++)
	{
		if (static_cast<unsigned int>(*(i + 1) - *i) < span)
			span = *(i + 1) - *i;
	}
	return (span);
}

unsigned int	Span::longestSpan(void) const
{
	if (!m_list.size())
		throw NoNumberException();
	else if (m_list.size() == 1)
		throw LonelyNumberException();
	std::vector<int>	list(m_list);

	std::sort(list.begin(), list.end());
	return (*(list.end() - 1) - *list.begin());
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::vector<int>	Span::getList(void) const
{
	return (m_list);
}

/* ************************************************************************** */