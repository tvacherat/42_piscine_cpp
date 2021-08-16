/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvachera <tvachera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/17 20:39:24 by tvachera          #+#    #+#             */
/*   Updated: 2021/07/18 14:26:02 by tvachera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Fixed	get_absf(Fixed f)
{
	return (f < 0 ? f * -1 : f);
}

Fixed	get_area(Point const a, Point const b, Point const c)
{
	Fixed	f1;
	Fixed	f2;
	Fixed	f3;

	f1 = a.get_x() * (b.get_y() - c.get_y());
	f2 = b.get_x() * (c.get_y() - a.get_y());
	f3 = c.get_x() * (a.get_y() - b.get_y());
	return (get_absf((f1 + f2 + f3) / 2));
}

bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
	Fixed	area;
	Fixed	f1;
	Fixed	f2;
	Fixed	f3;

	area = get_area(a, b, c);
	f1 = get_area(point, b, c);
	f2 = get_area(a, point, c);
	f3 = get_area(a, b, point);
	return (area == f1 + f2 + f3);
}