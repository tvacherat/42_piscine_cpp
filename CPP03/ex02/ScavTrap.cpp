/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvachera <tvachera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 14:23:08 by tvachera          #+#    #+#             */
/*   Updated: 2021/07/19 18:56:36 by tvachera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ScavTrap::ScavTrap(): ClapTrap(), m_guard_mode(false)
{
	m_hit = 100;
	m_energy = 50;
	m_damage = 20;
	std::cout << C_GREEN << "ScavTrap's default constructor called (" << m_name << ")" << C_RESET << std::endl;
}

ScavTrap::ScavTrap( const ScavTrap & src ): ClapTrap(src), m_guard_mode(src.m_guard_mode)
{
	std::cout << C_GREEN << "FragTrap's copy constructor called (" << m_name << ")" << C_RESET << std::endl;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name), m_guard_mode(false)
{
	m_hit = 100;
	m_energy = 50;
	m_damage = 20;
	std::cout << C_GREEN << "FragTrap's string constructor called (" << m_name << ")" << C_RESET << std::endl;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ScavTrap::~ScavTrap()
{
	std::cout << C_RED << "FragTrap's destructor called (" << m_name << ")" << C_RESET << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ScavTrap &				ScavTrap::operator=( ScavTrap const & rhs )
{
	ClapTrap::operator=(rhs);
	m_guard_mode = rhs.m_guard_mode;
	std::cout << C_CYAN << "ScavTrap's operator = called (" << m_name << ")" << C_RESET << std::endl;
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void	ScavTrap::attack(std::string const & target)
{
	std::cout << C_YELLOW << "ScavTrap " << m_name << " attacks " << target << " causing " << m_damage << " points of damage!" << C_YELLOW << std::endl;
}

void	ScavTrap::guardGuate(void)
{
	if (m_energy)
	{
		std::cout << C_YELLOW << "ScavTrap " << m_name << " switch to guard mode" << C_RESET << std::endl;
		m_guard_mode = true;
	}
	else
		std::cout << C_YELLOW << "ScavTrap " << m_name << " could not switch to guard mode because he's dead" << C_RESET << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

/* ************************************************************************** */