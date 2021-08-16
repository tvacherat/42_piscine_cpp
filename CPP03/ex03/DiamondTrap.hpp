/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvachera <tvachera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 14:54:53 by tvachera          #+#    #+#             */
/*   Updated: 2021/07/19 23:57:49 by tvachera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include <iostream>
# include <string>
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap
{

	public:

		DiamondTrap();
		DiamondTrap( DiamondTrap const & src );
		DiamondTrap( std::string name );
		~DiamondTrap();

		DiamondTrap &	operator=( DiamondTrap const & rhs );
		void			whoAmI(void) const;
		using			ScavTrap::attack; /* Works fine without */
		using	ScavTrap::m_energy;

	private:
		std::string	m_name;
};

#endif /* ***************************************************** DIAMONDTRAP_H */