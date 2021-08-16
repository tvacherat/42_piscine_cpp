/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvachera <tvachera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 11:47:55 by tvachera          #+#    #+#             */
/*   Updated: 2021/07/26 12:02:31 by tvachera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include <iostream>
# include <string>
# include "AMateria.hpp"

class Cure: public AMateria
{

	public:

		Cure();
		Cure( Cure const & src );
		~Cure();

		AMateria*	clone(void) const;
		void		use(ICharacter& target);

	private:
		Cure &		operator=( Cure const & rhs );

};

#endif /* ************************************************************ CURE_H */