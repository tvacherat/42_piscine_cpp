/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvachera <tvachera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/16 18:24:21 by tvachera          #+#    #+#             */
/*   Updated: 2021/07/17 20:06:26 by tvachera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>
# include <cmath>

class Fixed
{

	public:

		Fixed();
		Fixed(Fixed const & src);
		Fixed(int const i);
		Fixed(float const f);
		~Fixed();

		int		toInt(void) const;
		float	toFloat(void) const;

		int		getRawBits(void) const;
		void	setRawBits(int const raw);

		Fixed &	operator=(Fixed const & rhs);
		bool	operator>(Fixed const & rhs) const;
		bool	operator<(Fixed const & rhs) const;
		bool	operator>=(Fixed const & rhs) const;
		bool	operator<=(Fixed const & rhs) const;
		bool	operator==(Fixed const & rhs) const;
		bool	operator!=(Fixed const & rhs) const;
		Fixed	operator+(Fixed const & rhs) const;
		Fixed	operator-(Fixed const & rhs) const;
		Fixed	operator*(Fixed const & rhs) const;
		Fixed	operator/(Fixed const & rhs) const;
		Fixed &	operator++(void);
		Fixed	operator++(int);
		Fixed &	operator--(void);
		Fixed	operator--(int);

		static Fixed &			min(Fixed & f1, Fixed & f2);
		static Fixed const &	min(Fixed const & f1, Fixed const & f2);
		static Fixed &			max(Fixed & f1, Fixed & f2);
		static Fixed const &	max(Fixed const & f1, Fixed const & f2);

	private:
		int					m_value;
		static int const	_fbits;

};

std::ostream & operator<<(std::ostream & o, Fixed const & rhs);

#endif /* *********************************************************** FIXED_H */