#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>

class Brain
{

	public:

		Brain();
		Brain( Brain const & src );
		Brain(const std::string ideas[100]);
		~Brain();

		Brain &		operator=( Brain const & rhs );
		void		set_idea(size_t index, std::string idea);
		void		print_ideas(void) const;

	private:
		std::string	m_ideas[100];

};

#endif /* *********************************************************** BRAIN_H */