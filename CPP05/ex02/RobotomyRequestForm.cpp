#include "RobotomyRequestForm.hpp"
#include <cstdlib>
#include <ctime>

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

RobotomyRequestForm::RobotomyRequestForm(): Form("robotomy request", 72, 45, "default_target")
{
}

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm & src ): Form(src)
{
}

RobotomyRequestForm::RobotomyRequestForm(const std::string target): Form("robotomy request", 72, 45, target)
{
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

RobotomyRequestForm::~RobotomyRequestForm()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

RobotomyRequestForm &				RobotomyRequestForm::operator=( RobotomyRequestForm const & rhs )
{
	(void)rhs;
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	std::srand(std::time(NULL));
	int ret = rand() % 2;

	try
	{
		Form::execute(executor);
	}
	catch(const std::exception& e)
	{
		throw;
		return ;
	}
	std::cout << "*DRILL NOISE*" << std::endl;
	if (ret)
		std::cout << m_target << " has been robotomized" << std::endl;
	else
		std::cout << m_target << "'s robotomization failed" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */