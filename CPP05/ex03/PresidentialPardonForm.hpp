#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include <iostream>
# include <string>
# include "Form.hpp"

class PresidentialPardonForm: public Form
{

	public:

		PresidentialPardonForm();
		PresidentialPardonForm( PresidentialPardonForm const & src );
		PresidentialPardonForm(const std::string target);
		~PresidentialPardonForm();
		void	execute(Bureaucrat const & executor) const;
		Form*	clone(std::string const target) const;

	private:
		PresidentialPardonForm &		operator=( PresidentialPardonForm const & rhs );

};

#endif /* ****************************************** PRESIDENTIALPARDONFORM_H */