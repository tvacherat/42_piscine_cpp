#include "PresidentialPardonForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

PresidentialPardonForm::PresidentialPardonForm(): Form("presidential pardon", 25, 5, "default_target")
{
}

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm & src ): Form(src)
{
}

PresidentialPardonForm::PresidentialPardonForm(std::string const target): Form("presidential pardon", 25, 5, target)
{
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

PresidentialPardonForm::~PresidentialPardonForm()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

PresidentialPardonForm &				PresidentialPardonForm::operator=( PresidentialPardonForm const & rhs )
{
	(void)rhs;
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	try
	{
		Form::execute(executor);
	}
	catch(const std::exception& e)
	{
		throw;
		return ;
	}
	std::cout << m_target << " was forgiven by Zafod Beeblebrox" << std::endl;
}

Form*	PresidentialPardonForm::clone(std::string const target) const
{
	return (new PresidentialPardonForm(target));
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */