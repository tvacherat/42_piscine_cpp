/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvachera <tvachera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 16:57:42 by tvachera          #+#    #+#             */
/*   Updated: 2021/07/31 21:58:39 by tvachera         ###   ########.fr       */
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
		Form(std::string const name, size_t const gsign, size_t const gexec);
		~Form();

		const std::string &	getName(void) const;
		const size_t &		getGsign(void) const;
		const size_t &		getGexec(void) const;
		bool				isSigned(void) const;
		void				beSigned(Bureaucrat const & bur);

	private:
		Form &				operator=( Form const & rhs );
		const std::string	m_name;
		bool				m_signed;
		const size_t		m_gexec;
		const size_t		m_gsign;

	class GradeTooHighException: public std::exception
	{
		const char * what() const throw();
	};
	class GradeTooLowException: public std::exception
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
