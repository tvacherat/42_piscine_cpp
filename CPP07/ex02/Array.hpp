/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvachera <tvachera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 19:49:51 by tvachera          #+#    #+#             */
/*   Updated: 2021/08/09 12:36:58 by tvachera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <string>

template<typename T>
class Array
{

	public:

		Array(): m_size(0), m_array(NULL) {};
		Array(unsigned int n): m_array(new T[n]), m_size(n) {};
		Array( Array const & src ): m_size(src.m_size)
		{
			unsigned int i = 0;
			m_array = new T[m_size];

			while (i < m_size)
			{
				m_array[i] = src.m_array[i];
				i++;
			}
		};
		~Array() 
		{
			if (m_array)
				delete [] m_array;
		};
		Array &		operator=( Array const & rhs )
		{
			unsigned int	i = 0;

			if (&rhs == this)
				return (*this);
			if (m_array)
				delete [] m_array;
			m_size = rhs.m_size;
			if (m_size)
			{
				m_array = new T[m_size];
				while (i < m_size)
				{
					m_array[i] = rhs.m_array[i];
					i++;
				}
			}
			else
				m_array = NULL;
		};
		T &	operator[](unsigned int i)
		{
			if (i >= m_size)
			{
				throw OutOfRange();
			}
			return (m_array[i]);
		};
		T	operator[](unsigned int i) const
		{
			if (i >= m_size)
			{
				throw OutOfRange();
			}
			return (m_array[i]);
		};
		unsigned int	size(void) const
		{
			return (m_size);
		}
		class OutOfRange: public std::exception
		{
			const char * what() const throw()
			{
				return ("Out of range...");
			};
		};
	private:
		T			*m_array;
		unsigned int m_size;

};

template<typename T>
std::ostream &			operator<<( std::ostream & o, Array<T> const & rhs )
{
	unsigned int	i = 0;
	
	while (i < rhs.size())
	{
		o << rhs[i] << std::endl;
		i++;
	}
	return (o);
}

#endif /* *********************************************************** ARRAY_H */