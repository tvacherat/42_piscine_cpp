/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvachera <tvachera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 16:39:40 by tvachera          #+#    #+#             */
/*   Updated: 2021/07/31 22:00:58 by tvachera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
	Form		form("form", 10, 10);
	Bureaucrat	boss("boss", GRADE_MAX);
	Bureaucrat	new_guy("new", GRADE_MIN);

	std::cout << boss << std::endl;
	std::cout << new_guy << std::endl;
	std::cout << form << std::endl;
	boss.signForm(form);
	try
	{
		form.beSigned(new_guy);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	new_guy.signForm(form);
	boss.signForm(form);
	return 0;
}
