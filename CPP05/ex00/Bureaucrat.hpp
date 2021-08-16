/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvachera <tvachera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 16:10:52 by tvachera          #+#    #+#             */
/*   Updated: 2021/07/31 21:47:01 by tvachera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# define GRADE_MAX 1
# define GRADE_MIN 150

class Bureaucrat
{

	public:

		Bureaucrat();
		Bureaucrat( Bureaucrat const & src );
		Bureaucrat(std::string const name, size_t grade);
		~Bureaucrat();

		std::string	const	getName(void) const;
		size_t				getGrade(void) const;
		void			incGrade(void);
		void			decGrade(void);

	private:
		std::string const	m_name;
		size_t				m_grade;
		Bureaucrat &	operator=( Bureaucrat const & rhs );

	class GradeTooHighException: public std::exception
	{
		const char * what() const throw();
	};
	class GradeTooLowException: public std::exception
	{
		const char * what() const throw();
	};

};

std::ostream &			operator<<( std::ostream & o, Bureaucrat const & i );

#endif /* ****************************************************** BUREAUCRAT_H */