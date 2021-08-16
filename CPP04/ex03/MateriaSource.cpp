/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvachera <tvachera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 13:54:53 by tvachera          #+#    #+#             */
/*   Updated: 2021/07/26 15:47:51 by tvachera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

MateriaSource::MateriaSource(): m_source(new AMateria*[SOURCE_SIZE])
{
	size_t	i = 0;

	while (i < SOURCE_SIZE)
	{
		m_source[i] = NULL;
		i++;
	}
}

MateriaSource::MateriaSource( const MateriaSource & src ): m_source(new AMateria*[SOURCE_SIZE])
{
	size_t	i = 0;

	while (i < SOURCE_SIZE)
	{
		m_source[i] = src.m_source[i]->clone();
		i++;
	}
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

MateriaSource::~MateriaSource()
{
	size_t	i = 0;

	while (i < SOURCE_SIZE)
	{
		if (m_source[i])
			delete m_source[i];
		i++;
	}
	delete [] m_source;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

MateriaSource &				MateriaSource::operator=( MateriaSource const & rhs )
{
	if ( this != &rhs )
	{
		size_t	i = 0;

		while (i < SOURCE_SIZE)
		{
			if (m_source[i])
				delete m_source[i];
			m_source[i] = rhs.m_source[i]->clone();
			i++;
		}
	}
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void	MateriaSource::learnMateria(AMateria *m)
{
	size_t	i = 0;

	while (i < SOURCE_SIZE)
	{
		if (!m_source[i])
		{
			m_source[i] = m;
			return ;
		}
		i++;
	}
}

AMateria*	MateriaSource::createMateria(std::string const & type)
{
	size_t	i = 0;

	while (i < SOURCE_SIZE)
	{
		if (m_source[i] && m_source[i]->getType() == type)
			return (m_source[i]->clone());
		i++;
	}
	return (NULL);
}

/* ************************************************************************** */