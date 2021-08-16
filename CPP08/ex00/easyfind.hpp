/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvachera <tvachera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 12:25:34 by tvachera          #+#    #+#             */
/*   Updated: 2021/08/10 23:31:23 by tvachera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
 #define EASYFIND_HPP

#include <algorithm>
#include <vector>
#include <deque>
#include <list>
#include <set>
#include <queue>
#include <map>
#include <typeinfo>

class WrongContainerException: public std::exception
{
	// Every type that is not a c++98 container is refused
	// Stack included because not iterable, does not compile anyway
	// Every containers that do not store an int are refused
	// Only maps with int as key AND value are accepted
	const char * what() const throw()
	{
		return ("Error: wrong container type");
	}
};

template<typename T>
typename T::iterator	easyfind(T & container, int value)
{
	if (typeid(T) != typeid(std::vector<int>)
		&& typeid(T) != typeid(std::deque<int>)
		&& typeid(T) != typeid(std::list<int>)
		&& typeid(T) != typeid(std::map<int, int>)
		&& typeid(T) != typeid(std::queue<int>)
		&& typeid(T) != typeid(std::set<int>))
	{
		throw WrongContainerException();
	}
	return (std::find(container.begin(), container.end(), value));
}

#endif