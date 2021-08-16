/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvachera <tvachera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 11:07:21 by tvachera          #+#    #+#             */
/*   Updated: 2021/07/26 15:42:34 by tvachera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

AMateria::AMateria()
{
}

AMateria::AMateria( const AMateria & src ): m_type(src.m_type)
{
}

AMateria::AMateria( std::string const & type ): m_type(type)
{
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

AMateria::~AMateria()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

AMateria &				AMateria::operator=( AMateria const & rhs )
{
	(void)rhs;
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void	AMateria::use(ICharacter & target)
{
	(void)target;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string const &	AMateria::getType(void) const
{
	return (m_type);
}

/* ************************************************************************** */