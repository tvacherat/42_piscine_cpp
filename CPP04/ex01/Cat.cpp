/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvachera <tvachera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 11:20:38 by tvachera          #+#    #+#             */
/*   Updated: 2021/07/27 16:43:37 by tvachera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Cat::Cat(): m_brain(new Brain())
{
	m_type = "Cat";
	std::cout << "Cat's constructor called" << std::endl;
}

Cat::Cat( const Cat & src ): Animal(src), m_brain(new Brain(*src.m_brain))
{
	std::cout << "Cat's constructor called" << std::endl;
}

Cat::Cat( Brain & brain ): m_brain(new Brain(brain))
{
	m_type = "Cat";
	std::cout << "Cat's constructor called" << std::endl;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Cat::~Cat()
{
	delete m_brain;
	std::cout << "Cat's destructor has been called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Cat &				Cat::operator=( Cat const & rhs )
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

void	Cat::makeSound(void) const
{
	std::cout << "Miaouuuuw" << std::endl;
}

void	Cat::print_ideas(void) const
{
	m_brain->print_ideas();
}

void	Cat::set_Idea(size_t i, std::string idea)
{
	m_brain->set_idea(i, idea);
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */