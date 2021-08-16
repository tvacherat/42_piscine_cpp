/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvachera <tvachera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 16:39:40 by tvachera          #+#    #+#             */
/*   Updated: 2021/07/31 22:20:41 by tvachera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "Intern.hpp"

int main(void)
{
	Intern	someRandomIntern;
	Bureaucrat	boss("Boss", GRADE_MAX);
	Form*	fail;
	Form*	rrf;

	fail = someRandomIntern.makeForm("fail", "fail");
	rrf = someRandomIntern.makeForm("presidential pardon", "Bender");
	boss.signForm(*rrf);
	boss.executeForm(*rrf);
	if (fail) // Useless I know
		delete fail;
	if (rrf)
		delete rrf;	
	return 0;
}