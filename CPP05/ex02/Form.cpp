/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvachera <tvachera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 16:57:40 by tvachera          #+#    #+#             */
/*   Updated: 2021/07/31 17:06:39 by tvachera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Form::Form(): m_name("default_form"), m_signed(false), m_gexec(GRADE_MIN), m_gsign(GRADE_MIN), m_target("default_target")
{
}

Form::Form( const Form & src ): m_name(src.m_name), m_signed(false), m_gexec(src.m_gexec), m_gsign(src.m_gsign), m_target(src.m_target)
{
}

Form::Form( std::string const name, size_t const gsign, size_t const gexec, const std::string target): m_name(name), m_signed(false), m_gexec(gexec), m_gsign(gsign), m_target(target)
{
	if (m_gexec < GRADE_MAX || m_gsign < GRADE_MAX)
		throw Form::GradeTooHighException();
	if (m_gexec > GRADE_MIN || m_gsign > GRADE_MIN)
		throw Form::GradeTooLowException();
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Form::~Form()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Form &				Form::operator=( Form const & rhs )
{
	(void)rhs;
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Form const & i )
{
	o << "Form " << i.getName() << "." << " Grade required form signature: " << i.getGsign();
	o << ". Grade required for execution: " << i.getGexec() << ".";
	if (i.isSigned())
		o << " This form is signed.";
	else
		o << " This form is not signed yet.";
	o << " Target is " << i.getTarget() << ".";
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void	Form::beSigned(Bureaucrat const & bur)
{
	if (bur.getGrade() > m_gsign)
		throw Form::GradeTooLowException();
	else if (m_signed == true)
		throw Form::FormAlreadySignedException();
	else
		m_signed = true;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

const std::string &	Form::getName(void) const
{
	return (m_name);
}

const size_t &	Form::getGsign(void) const
{
	return (m_gsign);
}

const size_t &	Form::getGexec(void) const
{
	return (m_gexec);
}

bool	Form::isSigned(void) const
{
	return (m_signed);
}

const std::string & Form::getTarget(void) const
{
	return (m_target);
}

void		Form::execute(Bureaucrat const & executor) const
{
	if (m_signed == false)
		throw Form::FormNotSignedException();
	else if (executor.getGrade() > m_gexec)
		throw Form::GradeTooLowException();
}

/* ************************************************************************** */

const char *	Form::GradeTooHighException::what() const throw()
{
	return ("Grade is too high...");
}

const char *	Form::GradeTooLowException::what() const throw()
{
	return ("Grade is too low...");
}

const char *	Form::FormNotSignedException::what() const throw()
{
	return ("Form is not signed yet...");
}

const char *	Form::FormAlreadySignedException::what() const throw()
{
	return ("Form is already signed...");
}