#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include <string>
# include "Form.hpp"
# define NB_FORMS_TYPE 3

class Intern
{

	public:

		Intern();
		Intern( Intern const & src );
		~Intern();
		Intern &	operator=( Intern const & rhs );
		Form*		makeForm(std::string const name, std::string const target);

	private:
		Form		**m_forms;

};

#endif /* ********************************************************** INTERN_H */