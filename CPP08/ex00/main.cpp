/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvachera <tvachera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 12:46:05 by tvachera          #+#    #+#             */
/*   Updated: 2021/08/10 23:30:14 by tvachera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <stack>
#include <iostream>

#define VALUE 50

int main(void)
{
	std::vector<int>			container(10, 50);
	std::vector<int>::iterator	it;
	std::vector<char>			wrong(10, 'o');
	std::vector<char>::iterator	wrong_it;

	it = easyfind(container, VALUE);
	if (it != container.end())
		std::cout << VALUE << " has been found" << std::endl;
	else
		std::cout << VALUE << " has not been found" << std::endl;
	try
	{
		wrong_it = easyfind(wrong, VALUE);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return 0;
}
