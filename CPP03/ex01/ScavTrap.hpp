/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvachera <tvachera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 14:23:12 by tvachera          #+#    #+#             */
/*   Updated: 2021/07/19 18:59:31 by tvachera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include <string>
# include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{

	public:

		ScavTrap();
		ScavTrap( ScavTrap const & src );
		ScavTrap( std::string name );
		~ScavTrap();

		ScavTrap &		operator=( ScavTrap const & rhs );
		void	attack(std::string const & target);
		void	guardGuate(void);

	protected:
		bool	m_guard_mode;

};

#endif /* ******************************************************** SCAVTRAP_H */
