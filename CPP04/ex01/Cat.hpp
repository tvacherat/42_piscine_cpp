/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvachera <tvachera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 11:20:42 by tvachera          #+#    #+#             */
/*   Updated: 2021/07/22 16:04:47 by tvachera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include <string>
# include "Animal.hpp"
# include "Brain.hpp"

class Cat: public Animal
{

	public:

		Cat();
		Cat( Cat const & src );
		Cat( Brain & brain );
		~Cat();

		Cat &			operator=( Cat const & rhs );
		void	makeSound(void) const;
		void	print_ideas(void) const;
		void	set_Idea(size_t i, std::string idea);

	private:
		Brain	*m_brain;

};

#endif /* ************************************************************* CAT_H */