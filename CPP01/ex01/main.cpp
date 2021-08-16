/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvachera <tvachera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 13:22:33 by tvachera          #+#    #+#             */
/*   Updated: 2021/07/06 14:17:22 by tvachera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

#define C_YELLOW "\e[33m"
#define C_RESET "\e[0m"
#define C_GREEN "\e[32m"
#define SIZE 42

Zombie* zombieHorde(int N, std::string name);

int main()
{
	std::cout << C_YELLOW << "Creating a horde of size " << SIZE << " with names like \"zombie_n\":" << C_RESET << std::endl;
	Zombie	*horde = zombieHorde(SIZE, "zombie");
	if (horde)
		std::cout << C_GREEN << "Horde created !" << C_RESET << std::endl;
	else
		return (1);
	std::cout << C_YELLOW << "Let's announce them all !" << C_RESET << std::endl;
	for (size_t i = 0; i < SIZE; i++)
		horde[i].announce();
	std::cout << C_YELLOW << "Now we have to call delete on the entire horde to avoid leaks" << C_RESET << std::endl;
	delete [] horde;
	return (0);
}