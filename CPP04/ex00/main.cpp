/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvachera <tvachera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 11:19:25 by tvachera          #+#    #+#             */
/*   Updated: 2021/07/22 12:14:43 by tvachera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Dog.hpp"
# include "Cat.hpp"
# include "WrongCat.hpp"

int main(void)
{
	const Animal* meta = new Animal();
	const Animal* i = new Dog();
	const Animal* j = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();
	delete meta;
	meta = j;
	meta->makeSound();
	meta = i;
	meta->makeSound();
	delete i;
	delete j;

	std::cout << std::endl;
	const WrongAnimal* metawrong = new WrongCat();
	//Avec polymorphisme sans virtualisation de makeSound
	metawrong->makeSound();
	delete metawrong;
	return (0);
}
