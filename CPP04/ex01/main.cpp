/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvachera <tvachera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 15:21:43 by tvachera          #+#    #+#             */
/*   Updated: 2021/07/22 16:21:13 by tvachera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

#define C_YELLOW "\e[33m"
#define C_RESET "\e[0m"

int main(void)
{
	std::cout << C_YELLOW << "Leaks tests: " << C_RESET << std::endl;
	{ // Leaks tests
		const Animal* j = new Dog();
		const Animal* i = new Cat();
		delete j;
		delete i;
	}
	std::cout << std::endl << C_YELLOW << "Array tests: " << C_RESET << std::endl;
	{ // Array tests
		Animal* array[4];
		size_t	i = 0;
		while (i < 4)
		{
			if (i < 2)
			{
				array[i] = new Dog();
				array[i]->makeSound();
			}
			else
			{
				array[i] = new Cat();
				array[i]->makeSound();
			}
			i++;
		}
		i = 0;
		while (i < 4)
		{
			delete array[i];
			i++;
		}
	}
	std::cout << std::endl << C_YELLOW << "Deep copy tests: " << C_RESET << std::endl;
	{ // Deep copy test
		Brain	dogs_brain;

		dogs_brain.set_idea(0, "First idea: eat");
		dogs_brain.set_idea(1, "Second idea: give love");
		dogs_brain.set_idea(2, "Third idea: GO OUTSIDE");
		Dog	doggy(dogs_brain);
		Dog snoopy(doggy);
		doggy.set_Idea(2, "Thid idea: BARK");
		doggy.print_ideas();
		std::cout << std::endl;
		snoopy.print_ideas();
		std::cout << std::endl;
	}
	return 0;
}
