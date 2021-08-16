/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvachera <tvachera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/17 20:39:27 by tvachera          #+#    #+#             */
/*   Updated: 2021/07/18 14:26:16 by tvachera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include <iostream>
# include <string>
# include "Fixed.hpp"

class Point
{

	public:

		Point();
		Point(Point const & src);
		Point(Fixed const x, Fixed const y);
		~Point();

		Fixed	get_x(void) const;
		Fixed	get_y(void) const;

	private:
		Fixed const m_x;
		Fixed const m_y;
		Point &	operator=(Point const & rhs);

};

#endif /* *********************************************************** POINT_H */