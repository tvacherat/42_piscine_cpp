/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvachera <tvachera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 16:57:42 by tvachera          #+#    #+#             */
/*   Updated: 2021/07/31 17:06:55 by tvachera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>
# include "Bureaucrat.hpp"

class Form
{

	public:
		Form();
		Form( Form const & src );
		Form(std::string const name, size_t const gsign, size_t const gexec, std::string const target);
		virtual ~Form();
		const std::string &	getName(void) const;
		const std::string &	getTarget(void) const;
		const size_t &		getGsign(void) const;
		const size_t &		getGexec(void) const;
		bool				isSigned(void) const;
		void				beSigned(Bureaucrat const & bur);
		virtual void		execute(Bureaucrat const & executor) const = 0;
		virtual Form*		clone(std::string const target) const = 0;

	protected:
		Form &				operator=( Form const & rhs );
		const std::string	m_name;
		bool				m_signed;
		const size_t		m_gexec;
		const size_t		m_gsign;
		std::string const	m_target;

	class GradeTooHighException: public std::exception
	{
		const char * what() const throw();
	};
	class GradeTooLowException: public std::exception
	{
		const char * what() const throw();
	};
	class FormNotSignedException: public std::exception
	{
		const char * what() const throw();
	};
	class FormAlreadySignedException: public std::exception
	{
		const char * what() const throw();
	};
};

std::ostream &			operator<<( std::ostream & o, Form const & i );

#endif /* ************************************************************ FORM_H */