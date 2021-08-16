#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>
# include <string>

class Weapon
{

	public:

		Weapon(std::string const & type);
		~Weapon();
		std::string const & getType(void) const;
		void	setType(std::string const & type);

	private:
		std::string	m_type;

};

#endif /* ********************************************************** WEAPON_H */