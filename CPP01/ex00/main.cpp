/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvachera <tvachera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 13:22:33 by tvachera          #+#    #+#             */
/*   Updated: 2021/07/06 13:45:15 by tvachera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

#define C_YELLOW "\e[33m"
#define C_RESET "\e[0m"
#define C_GREEN "\e[32m"

void	randomChump(std::string name);
Zombie	*newZombie(std::string name);

int main()
{
	std::cout << C_YELLOW << "randomChump() create a zombie on the stack, announce it and calls its destructor when leaving the routine:" << C_RESET << std::endl;
	randomChump("Stack zombie");
	std::cout << C_YELLOW << "newZombie() create a zombie on the heap and return it:" << C_RESET << std::endl;
	Zombie	*new_z = newZombie("Heap Zombie");
	if (new_z)
		std::cout << C_GREEN << "Heap zombie has been created, let's announce it !" << C_RESET << std::endl;
	else
		return (1);
	new_z->announce();
	std::cout << C_YELLOW << "Now we have to delete it to avoid leaks, it will calls the destructor and free the memory" << C_RESET << std::endl;
	delete new_z;
	return (0);
}
