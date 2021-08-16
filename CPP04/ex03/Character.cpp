/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvachera <tvachera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 13:55:07 by tvachera          #+#    #+#             */
/*   Updated: 2021/07/26 15:38:36 by tvachera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "AMateria.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Character::Character(): m_name("default_name"), m_inventory(new AMateria*[INV_SIZE])
{
	size_t	i = 0;

	while (i < INV_SIZE)
	{
		m_inventory[i] = NULL;
		i++;
	}
}

Character::Character( const Character & src ): m_name(src.m_name), m_inventory(new AMateria*[INV_SIZE])
{
	size_t	i = 0;

	while (i < INV_SIZE)
	{
		m_inventory[i] = src.m_inventory[i]->clone();
		i++;
	}
}

Character::Character( std::string const name): m_name(name), m_inventory(new AMateria*[INV_SIZE])
{
	size_t	i = 0;

	while (i < INV_SIZE)
	{
		m_inventory[i] = NULL;
		i++; 
	}
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Character::~Character()
{
	size_t	i = 0;

	while (i < INV_SIZE)
	{
		if (m_inventory[i])
			delete m_inventory[i];
		i++;
	}
	delete [] m_inventory;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Character &	Character::operator=( Character const & rhs )
{
	if ( this != &rhs )
	{
		size_t i = 0;

		while (i < INV_SIZE)
		{
			if (m_inventory[i])
				delete m_inventory[i];
			m_inventory[i] = rhs.m_inventory[i]->clone();
			i++;
		}
	}
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void	Character::equip(AMateria* m)
{
	size_t	i = 0;

	while ( i < INV_SIZE)
	{
		if (!m_inventory[i])
		{
			m_inventory[i] = m;
			return ;
		}
		i++;
	}
}

void	Character::unequip(int idx)
{
	if (idx < INV_SIZE && m_inventory[idx])
		m_inventory[idx] = NULL;
}

void	Character::use(int idx, ICharacter & target)
{
	if (idx < INV_SIZE && m_inventory[idx])
		m_inventory[idx]->use(target);
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string const &	Character::getName(void) const
{
	return (m_name);
}

/* ************************************************************************** */