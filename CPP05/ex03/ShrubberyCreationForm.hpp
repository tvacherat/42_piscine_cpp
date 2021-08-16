#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <iostream>
# include <string>
# include "Form.hpp"

class ShrubberyCreationForm: public Form
{

	public:

		ShrubberyCreationForm();
		ShrubberyCreationForm( ShrubberyCreationForm const & src );
		ShrubberyCreationForm( std::string const target );
		~ShrubberyCreationForm();
		void	execute(Bureaucrat const & executor) const;
		Form*	clone(std::string const target) const;

	private:
		ShrubberyCreationForm &		operator=( ShrubberyCreationForm const & rhs );

};

#endif /* ******************************************* SHRUBBERYCREATIONFORM_H */