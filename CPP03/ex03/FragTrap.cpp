/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvachera <tvachera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 14:20:34 by tvachera          #+#    #+#             */
/*   Updated: 2021/07/19 18:56:29 by tvachera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

FragTrap::FragTrap(): ClapTrap()
{
	m_hit = 100;
	m_energy = 100;
	m_damage = 30;
	std::cout << C_GREEN << "FragTrap's default constructor called (" << m_name << ")" << C_RESET << std::endl;
}

FragTrap::FragTrap( const FragTrap & src ): ClapTrap(src)
{
	std::cout << C_GREEN << "FragTrap's copy constructor called (" << m_name << ")" << C_RESET << std::endl;
}

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
	m_hit = 100;
	m_energy = 100;
	m_damage = 30;
	std::cout << C_GREEN << "FragTrap's string constructor called (" << m_name << ")" << C_RESET << std::endl;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

FragTrap::~FragTrap()
{
	std::cout << C_RED << "FragTrap's destructor called (" << m_name << ")" << C_RESET << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

FragTrap &				FragTrap::operator=( FragTrap const & rhs )
{
	ClapTrap::operator=(rhs);
	std::cout << C_CYAN << "FragTrap's operator = called (" << m_name << ")" << C_RESET << std::endl;
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void	FragTrap::highFivesGuys(void)
{
	std::cout << C_YELLOW << "FragTrap " << m_name << " kindly ask for high fives" << C_RESET << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */