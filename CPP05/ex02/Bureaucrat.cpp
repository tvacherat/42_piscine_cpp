/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvachera <tvachera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 16:57:36 by tvachera          #+#    #+#             */
/*   Updated: 2021/07/31 22:01:43 by tvachera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Bureaucrat::Bureaucrat(): m_name("New_guy"), m_grade(GRADE_MIN)
{
}

Bureaucrat::Bureaucrat( const Bureaucrat & src ): m_name(src.m_name), m_grade(src.m_grade)
{
}

Bureaucrat::Bureaucrat(std::string const name, size_t grade): m_name(name)
{
	if (m_grade > GRADE_MIN)
		throw Bureaucrat::GradeTooLowException();
		m_grade = GRADE_MIN;
	else if (m_grade < GRADE_MAX)
		throw Bureaucrat::GradeTooHighException();
	else
		m_grade = grade;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Bureaucrat::~Bureaucrat()
{
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Bureaucrat &				Bureaucrat::operator=( Bureaucrat const & rhs )
{
	(void)rhs;
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Bureaucrat const & i )
{
	o << i.getName() << ", bureaucrat grade " << i.getGrade() << ".";
	return o;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void	Bureaucrat::incGrade(void)
{
	if (m_grade - 1 < GRADE_MAX)
		throw Bureaucrat::GradeTooHighException();
	else
		m_grade--;
}

void	Bureaucrat::decGrade(void)
{
	if (m_grade + 1 > GRADE_MIN)
		throw Bureaucrat::GradeTooLowException();
	else
		m_grade++;
}

void	Bureaucrat::signForm(Form & form)
{
	try
	{
		form.beSigned(*this);
	}
	catch(const std::exception& e)
	{
		std::cerr << m_name << " cannot sign " << form.getName() << ": ";
		std::cerr << e.what() << '\n';
		return ;
	}
	std::cout << m_name << " signs " << form.getName() << std::endl;
}

void			Bureaucrat::executeForm(Form const & form)
{
	try
	{
		form.execute(*this);
	}
	catch(const std::exception& e)
	{
		std::cerr << m_name << " cannot execute " << form.getName() << ": ";
		std::cerr << e.what() << '\n';
		return ;
	}
	std::cout << m_name << " executs " <<  form.getName() << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string const	Bureaucrat::getName(void) const
{
	return(m_name);
}

size_t	Bureaucrat::getGrade(void) const
{
	return (m_grade);
}

/* ************************************************************************** */

const char *	Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade is too high...");
}

const char *	Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade is too low...");
}
