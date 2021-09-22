/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvachera <tvachera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 16:39:40 by tvachera          #+#    #+#             */
/*   Updated: 2021/09/22 10:24:52 by tvachera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
	Bureaucrat	boss("boss", GRADE_MAX);
	Bureaucrat	new_guy("new", GRADE_MIN);
	
	try
	{
		boss.incGrade();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		new_guy.decGrade();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << boss << std::endl;
	std::cout << new_guy << std::endl;

	return 0;
}
