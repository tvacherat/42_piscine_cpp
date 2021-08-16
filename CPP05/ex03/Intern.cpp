#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Intern::Intern(): m_forms(new Form*[NB_FORMS_TYPE])
{
	m_forms[0] = new ShrubberyCreationForm();
	m_forms[1] = new RobotomyRequestForm();
	m_forms[2] = new PresidentialPardonForm();
}

Intern::Intern( const Intern & src ): m_forms(new Form*[NB_FORMS_TYPE])
{
	size_t	i = 0;

	while (i < NB_FORMS_TYPE)
	{
		m_forms[i] = src.m_forms[i];
		i++;
	}
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Intern::~Intern()
{
	size_t	i = 0;

	while (i < NB_FORMS_TYPE)
	{
		if (m_forms[i])
			delete m_forms[i];
		i++;
	}
	delete [] m_forms;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Intern &				Intern::operator=( Intern const & rhs )
{
	size_t	i = 0;

	while (i < NB_FORMS_TYPE)
	{
		if (m_forms[i])
			delete m_forms[i];
		m_forms[i] = rhs.m_forms[i];
		i++;
	}
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

Form*	Intern::makeForm(std::string const name, std::string const target)
{
	size_t	i = 0;

	while (i < NB_FORMS_TYPE)
	{
		if (m_forms[i]->getName() == name)
		{
			std::cout << "Intern creates " << name << std::endl;
			return (m_forms[i]->clone(target));
		}
		i++;
	}
	std::cerr << "Intern couldnt't create form \"" << name << "\"" << std::endl;
	return (NULL);
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */