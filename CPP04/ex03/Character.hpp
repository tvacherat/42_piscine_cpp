/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvachera <tvachera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 13:55:01 by tvachera          #+#    #+#             */
/*   Updated: 2021/07/26 14:54:07 by tvachera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include <string>
# include "ICharacter.hpp"
# define INV_SIZE 4

class Character: public ICharacter
{

	public:

		Character();
		Character( Character const & src );
		Character( std::string const name);
		~Character();

		void			equip(AMateria* m);
		void			unequip(int idx);
		void			use(int idx, ICharacter& target);
		std::string	const & getName(void) const;
		Character &		operator=( Character const & rhs );

	private:
		std::string const m_name;
		AMateria	**m_inventory;
};

#endif /* ******************************************************* CHARACTER_H */