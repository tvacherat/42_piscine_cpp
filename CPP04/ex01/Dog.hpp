/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvachera <tvachera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 11:20:59 by tvachera          #+#    #+#             */
/*   Updated: 2021/07/22 16:04:42 by tvachera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include <string>
# include "Animal.hpp"
# include "Brain.hpp"

class Dog: public Animal
{

	public:

		Dog();
		Dog( Dog const & src );
		Dog( Brain & brain );
		~Dog();

		Dog &			operator=( Dog const & rhs );
		void	makeSound(void) const;
		void	print_ideas(void) const;
		void	set_Idea(size_t i, std::string idea);

	private:
		Brain	*m_brain;

};

#endif /* ************************************************************* DOG_H */