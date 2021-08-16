#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <iostream>
# include <string>
# include "Form.hpp"

class RobotomyRequestForm: public Form
{

	public:

		RobotomyRequestForm();
		RobotomyRequestForm( RobotomyRequestForm const & src );
		RobotomyRequestForm( std::string const target );
		~RobotomyRequestForm();
		void	execute(Bureaucrat const & executor) const;
		Form*	clone(std::string const target) const;

	private:
		RobotomyRequestForm &		operator=( RobotomyRequestForm const & rhs );

};

#endif /* ********************************************* ROBOTOMYREQUESTFORM_H */