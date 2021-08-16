/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvachera <tvachera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 11:20:52 by tvachera          #+#    #+#             */
/*   Updated: 2021/07/27 16:44:00 by tvachera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Dog::Dog(): m_brain(new Brain())
{
	m_type = "Dog";
	std::cout << "Dog's constructor called" << std::endl;
}

Dog::Dog( const Dog & src ): Animal(src), m_brain(new Brain(*src.m_brain))
{
	std::cout << "Dog's constructor called" << std::endl;
}

Dog::Dog( Brain & brain ): m_brain(new Brain(brain))
{
	m_type = "Dog";
	std::cout << "Dog's constructor called" << std::endl;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Dog::~Dog()
{
	delete m_brain;
	std::cout << "Dog's destructor has been called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Dog &				Dog::operator=( Dog const & rhs )
{
	if ( this != &rhs )
	{
		Animal::operator=(rhs);
		*m_brain = *rhs.m_brain;
	}
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void	Dog::makeSound(void) const
{
	std::cout << "Wouuuuuf" << std::endl;
}

void	Dog::print_ideas(void) const
{
	m_brain->print_ideas();
}

void	Dog::set_Idea(size_t i, std::string idea)
{
	m_brain->set_idea(i, idea);
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */