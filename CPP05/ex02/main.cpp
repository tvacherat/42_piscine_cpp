/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvachera <tvachera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 16:39:40 by tvachera          #+#    #+#             */
/*   Updated: 2021/07/31 12:34:08 by tvachera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#define C_YELLOW "\e[33m"
#define C_RESET "\e[0m"

int main(void)
{
	Bureaucrat	boss("boss", GRADE_MAX);
	Bureaucrat	new_guy("new guy", GRADE_MIN);

	std::cout << boss << std::endl;
	std::cout << new_guy << std::endl;
	std::cout << std::endl << C_YELLOW << "Shrubbery creation test:" << C_RESET << std::endl;
	{	// Shrubbery Creation test
		ShrubberyCreationForm	form("Island");

		std::cout << form << std::endl;
		new_guy.signForm(form);
		boss.signForm(form);
		new_guy.executeForm(form);
		boss.executeForm(form);
	}
	std::cout << std::endl << C_YELLOW << "Robotomy request test:" << C_RESET << std::endl;
	{	// Robotomy request test
		RobotomyRequestForm	form("Terminator");

		std::cout << form << std::endl;
		new_guy.signForm(form);
		boss.signForm(form);
		new_guy.executeForm(form);
		boss.executeForm(form);
	}
	std::cout << std::endl << C_YELLOW << "Presidential pardon test:" << C_RESET << std::endl;
	{	// Presidential pardon test
		PresidentialPardonForm	form("Patrick Balkany");

		std::cout << form << std::endl;
		new_guy.signForm(form);
		boss.signForm(form);
		new_guy.executeForm(form);
		boss.executeForm(form);
	}
	return 0;
}
