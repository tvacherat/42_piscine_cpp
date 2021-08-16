/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvachera <tvachera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/16 18:24:21 by tvachera          #+#    #+#             */
/*   Updated: 2021/07/16 18:29:10 by tvachera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>

class Fixed
{

	public:

		Fixed();
		Fixed(Fixed const & src);
		~Fixed();
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		Fixed &	operator=(Fixed const & rhs);

	private:
		int					m_value;
		static int const	_fbits;

};

#endif /* *********************************************************** FIXED_H */