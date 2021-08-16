/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvachera <tvachera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 11:42:58 by tvachera          #+#    #+#             */
/*   Updated: 2021/07/26 15:40:10 by tvachera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include <iostream>
# include <string>
# include "AMateria.hpp"

class Ice: public AMateria
{

	public:

		Ice();
		Ice( Ice const & src );
		~Ice();

		AMateria*	clone(void) const;
		void		use(ICharacter& target);

	private:
		Ice &		operator=( Ice const & rhs );
};

#endif /* ************************************************************* ICE_H */