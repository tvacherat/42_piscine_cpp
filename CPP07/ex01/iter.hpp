/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvachera <tvachera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 18:05:53 by tvachera          #+#    #+#             */
/*   Updated: 2021/08/08 19:32:58 by tvachera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
 #define ITER_HPP

template<typename T>
void	iter(T const *array, unsigned int const len, void (*f)(T const & arg))
{
	unsigned int	i = 0;

	while (i < len)
	{
		(f)(array[i]);
		i++;
	}
}

#endif