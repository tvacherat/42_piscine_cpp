/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvachera <tvachera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 14:54:49 by tvachera          #+#    #+#             */
/*   Updated: 2021/07/20 00:07:28 by tvachera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

DiamondTrap::DiamondTrap(): m_name(ClapTrap::m_name)
{
	ClapTrap::m_name += "_clap_name";
	m_energy = 50;
	std::cout << C_GREEN << "DiamondTrap's default constructor called (" << m_name << ")" << C_RESET << std::endl;
}

DiamondTrap::DiamondTrap( const DiamondTrap & src ): ClapTrap(src), ScavTrap(src), FragTrap(src), m_name(src.m_name)
{
	std::cout << C_GREEN << "DiamondTrap's copy constructor called (" << m_name << ")" << C_RESET << std::endl;
}

DiamondTrap::DiamondTrap( std::string name): ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name), m_name(name)
{
	m_energy = 50;
	std::cout << C_GREEN << "DiamondTrap's string constructor called (" << m_name << ")" << C_RESET << std::endl;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

DiamondTrap::~DiamondTrap()
{
	std::cout << C_RED << "DiamondTrap's destructor called (" << m_name << ")" << C_RESET << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

DiamondTrap &				DiamondTrap::operator=( DiamondTrap const & rhs )
{
	ScavTrap::operator=(rhs);
	FragTrap::operator=(rhs);
	m_name = rhs.m_name;
	std::cout << C_CYAN << "DiamondTrap's operator = called (" << m_name << ")" << C_RESET << std::endl;
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void	DiamondTrap::whoAmI(void) const
{
	std::cout << C_YELLOW << "My diamondTrap's name is " << m_name << " and my ClapTrap name is " << ClapTrap::m_name << C_RESET << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */