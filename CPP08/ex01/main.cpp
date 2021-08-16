/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvachera <tvachera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 13:24:02 by tvachera          #+#    #+#             */
/*   Updated: 2021/08/16 14:53:38 by tvachera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <ctime>
#include <cstdlib>

#define MAX_VAL 50000
#define C_YELLOW "\e[33m"
#define C_RESET "\e[0m"

int main(void)
{
	std::cout << C_YELLOW << "Subject's tests" << C_RESET << std::endl;
	{	// Subject's tests
		Span	sp(5);

		sp.addNumber(5);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	std::cout << std::endl << C_YELLOW << "Massive tests with random values & SIZE = " << MAX_VAL << C_RESET << std::endl;
	{	// Massive tests
		Span	sp(MAX_VAL);
		srand(time(NULL));

		for (size_t i = 0; i < MAX_VAL; i++)
		{
			sp.addNumber(rand());
		}
		std::cout << "shortest span: " << sp.shortestSpan() << std::endl; 
		std::cout << "longest span: " << sp.longestSpan() << std::endl;
	}
	std::cout << std::endl << C_YELLOW << "Range insertion tests from an int array" << C_RESET << std::endl;
	{	// Range insertion tests
		Span	sp(10);
		int		tab[10] = {2147483647, -2147483648, 0, 999, -666, 1, 42, -21, 17, -9999};

		sp.addRange(tab, tab + 10);
		std::cout << sp << std::endl;
		std::cout << "shortest span: " << sp.shortestSpan() << std::endl; 
		std::cout << "longest span: " << sp.longestSpan() << std::endl;

	}
	std::cout << C_YELLOW << std::endl << "Exception tests" << C_RESET << std::endl;
	{
		Span	sp(1);

		try
		{
			sp.longestSpan();
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
		sp.addNumber(42);
		try
		{
			sp.shortestSpan();
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
		try
		{
			sp.addNumber(21);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}	
	}
	return (0);
}