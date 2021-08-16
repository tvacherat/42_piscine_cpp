#include "HumanB.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

HumanB::HumanB(std::string const & name): m_name(name), m_weapon(NULL)
{
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

HumanB::~HumanB()
{
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void	HumanB::attack(void) const
{
	if (m_weapon)
		std::cout << m_name << " attacks with his " << m_weapon->getType() << std::endl;
	else
		std::cout << m_name << " has no weapon yet, cannot attack" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

void	HumanB::setWeapon(Weapon & weapon)
{
	m_weapon = &weapon;
}

/* ************************************************************************** */