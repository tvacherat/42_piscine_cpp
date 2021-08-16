#include "Brain.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Brain::Brain()
{
	std::cout << "Brain's constructor called" << std::endl;
}

Brain::Brain( const Brain & src )
{
	*this = src;
	std::cout << "Brain's constructor called" << std::endl;
}

Brain::Brain( const std::string ideas[100])
{
	size_t	i;

	i = 0;
	while (i < 100)
	{
		m_ideas[i] = ideas[i];
		i++;
	}
	std::cout << "Brain's constructor called" << std::endl;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Brain::~Brain()
{
	std::cout << "Brain's destructor has been called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Brain &				Brain::operator=( Brain const & rhs )
{
	size_t	i;

	i = 0;
	if ( this != &rhs )
	{
		while (i < 100)
		{
			m_ideas[i] = rhs.m_ideas[i];
			i++;
		}
	}
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void	Brain::print_ideas(void) const
{
	size_t	i = 0;

	while (i < 100)
	{
		if (m_ideas[i].length())
			std::cout << m_ideas[i] << std::endl;
		i++;
	}
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

void		Brain::set_idea(size_t index, std::string idea)
{
	m_ideas[index] = idea;
}


/* ************************************************************************** */