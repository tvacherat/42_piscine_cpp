/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvachera <tvachera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 12:24:09 by tvachera          #+#    #+#             */
/*   Updated: 2021/08/09 12:24:11 by tvachera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
 #define WHATEVER_HPP

template<typename T>
void	swap(T & rhs, T & lhs)
{
	T	tmp;

	tmp = rhs;
	rhs = lhs;
	lhs = tmp;
}

template<typename T>
T const &	min(T const & rhs, T const & lhs)
{
	return (rhs < lhs ? rhs : lhs);
}

template<typename T>
T const &	max(T const & rhs, T const & lhs)
{
	return (rhs > lhs ? rhs : lhs);
}

#endif