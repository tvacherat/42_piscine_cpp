/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvachera <tvachera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 18:19:22 by tvachera          #+#    #+#             */
/*   Updated: 2021/08/09 12:31:12 by tvachera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>
#include <string>

class Awesome
{
	public:
		Awesome( void ) : _n( 42 )
		{
			return ;
		}
		int get( void ) const
		{
			return (this->_n);
		}
	private:
		int _n;
};

std::ostream & operator<<( std::ostream & o, Awesome const & rhs )
{
	o << rhs.get();
	return (o);
}

template< typename T >
void print( T const & x )
{
	std::cout << x << std::endl;
	return ;
}

int main(void)
{
	std::string	str_array[5] = {"One", "Two", "Three", "For", "Five"};
	Awesome		awesome_array[5];
	int			size = 5;

	::iter(str_array, size, ::print);
	std::cout << std::endl;
	// Array's type different (Class Awesome)
	::iter(awesome_array, size, ::print);
	return (0);
}