/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvachera <tvachera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 11:27:57 by tvachera          #+#    #+#             */
/*   Updated: 2021/07/19 18:46:56 by tvachera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ClapTrap::ClapTrap(): m_name("default"), m_hit(10), m_energy(10), m_damage(0)
{
	std::cout << C_GREEN << "ClapTrap's default constructor called (" << m_name << ")" << C_RESET << std::endl;
}

ClapTrap::ClapTrap( const ClapTrap & src ): m_name(src.m_name), m_hit(src.m_hit), m_energy(src.m_energy), m_damage(src.m_damage)
{
	std::cout << C_GREEN << "ClapTrap's copy constructor called (" << m_name << ")" << C_RESET << std::endl;
}

ClapTrap::ClapTrap(std::string name): m_name(name), m_hit(10), m_energy(10), m_damage(0)
{
	std::cout << C_GREEN << "ClapTrap's string constructor called (" << m_name << ")" << C_RESET << std::endl;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ClapTrap::~ClapTrap()
{
	std::cout << C_RED << "ClapTrap's destructor called (" << m_name << ")" << C_RESET << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ClapTrap &				ClapTrap::operator=( ClapTrap const & rhs )
{
	m_name = rhs.m_name;
	m_hit = rhs.m_hit;
	m_energy = rhs.m_energy;
	m_damage = rhs.m_damage;
	std::cout << C_CYAN <<  "ClapTrap's operator = called (" << m_name << ")" << std::endl << C_RESET;
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void	ClapTrap::attack(std::string const & target)
{
	std::cout << C_YELLOW << "ClapTrap " << m_name << " attacks " << target << " causing " << m_damage << " points of damage!" << C_RESET << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << C_YELLOW << "ClapTrap " << m_name << " has taken " << amount << " points of damage" << C_RESET << std::endl;
	if (amount >= m_energy)
	{
		m_energy = 0;
		std::cout << C_YELLOW << "ClapTrap " << m_name << C_RESET << " died." << std::endl;
	}
	else
	{
		m_energy -= amount;
		std::cout << C_YELLOW << "ClapTrap " << m_name << "'s energy points is now " << m_energy << C_RESET << std::endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (!m_energy)
	{
		m_energy = amount;
		std::cout << C_YELLOW << "ClapTrap " << m_name << " has been repaired and is back to life with " << amount << " energy points" << C_RESET << std::endl;
	}
	else
	{
		m_energy += amount;
		std::cout << C_YELLOW << "ClapTrap " << m_name << " has been repaired of " << amount << " energy points. It has now " << m_energy << " energy points." << C_RESET << std::endl;
	}
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

unsigned int	ClapTrap::get_damage(void) const
{
	return (m_damage);
}

/* ************************************************************************** */