/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvachera <tvachera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 11:27:55 by tvachera          #+#    #+#             */
/*   Updated: 2021/07/19 23:45:34 by tvachera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

# define C_CYAN "\e[36m"
# define C_GREEN "\e[32m"
# define C_RED "\e[31m"
# define C_YELLOW "\e[33m"
# define C_RESET "\e[0m"

class ClapTrap
{

	public:

		ClapTrap();
		ClapTrap( ClapTrap const & src );
		ClapTrap( std::string name );
		~ClapTrap();

		ClapTrap &		operator=( ClapTrap const & rhs );

		void	attack(std::string const & target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		unsigned int	get_damage(void) const;

	protected:
		std::string		m_name;
		unsigned int	m_hit;
		unsigned int	m_energy;
		unsigned int	m_damage;
};

#endif /* ******************************************************** CLAPTRAP_H */