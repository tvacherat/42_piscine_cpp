#include "Weapon.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Weapon::Weapon(std::string const & type): m_type(type)
{
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Weapon::~Weapon()
{
}

/*
** --------------------------------- METHODS ----------------------------------
*/

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string const & Weapon::getType(void) const
{
	return (m_type);
}

void	Weapon::setType(std::string const & type)
{
	m_type = type;
}

/* ************************************************************************** */