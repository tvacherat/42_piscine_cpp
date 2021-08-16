/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvachera <tvachera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 17:11:03 by tvachera          #+#    #+#             */
/*   Updated: 2021/08/04 17:11:04 by tvachera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP

# include <iostream>
# include <string>

class Base {public: virtual ~Base(void) {}};
class A: public Base {};
class B: public Base {};
class C: public Base {};

#endif /* ************************************************************ BASE_H */