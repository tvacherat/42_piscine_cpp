#include "ShrubberyCreationForm.hpp"
#include <fstream>

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ShrubberyCreationForm::ShrubberyCreationForm(): Form("shrubbery creation", 145, 137, "default_target")
{
}

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm & src ): Form(src)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target): Form("shrubbery creation", 145, 137, target)
{
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ShrubberyCreationForm &				ShrubberyCreationForm::operator=( ShrubberyCreationForm const & rhs )
{
	(void)rhs;
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	std::ofstream	output;
	const std::string	name = m_target + "_shrubbery";

	try
	{
		Form::execute(executor);
		output.open(name.data(), std::ofstream::trunc | std::ofstream::out);
	}
	catch(const std::exception& e)
	{
		throw;
		return ;
	}
	output << "           _  _             _  _" << std::endl;
	output << "  .       /\\\\/%\\       .   /%\\/%\\     ." << std::endl;
	output << "      __.<\\\\%#//\\,_       <%%#/%%\\,__  ." << std::endl;
	output << ".    <%#/|\\\\%%%#///\\    /^%#%%\\///%#\\\\" << std::endl;
	output << "      \"\"/%/\"\"\\ \\\"\"//|   |/\"\"\'/ /\\//\"//'" << std::endl;
	output << " .     L/'`   \\ \\  `    \"   / /  ```" << std::endl;
	output << "        `      \\ \\     .   / /       ." << std::endl;
	output << " .       .      \\ \\       / /  ." << std::endl;
	output << "        .        \\ \\     / /          ." << std::endl;
	output << "   .      .    ..:\\ \\:::/ /:.     .     ." << std::endl;
	output << "______________/ \\__;\\___/\\;_/\\________________________________" << std::endl;
	output << "YwYwYwYwYwYwYwYwYwYwYwYwYwYwYwYwYwYwYwYwYwYwYwYwYwYwYwYwYwYwYw" << std::endl;
	output.close();
	std::cout << "Form " << m_name << " has been executed by " << executor.getName() << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */