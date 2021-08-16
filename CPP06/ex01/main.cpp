/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvachera <tvachera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 16:29:41 by tvachera          #+#    #+#             */
/*   Updated: 2021/08/04 16:44:28 by tvachera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"
#include <iostream>
#include <stdint.h>
#include <iomanip>

uintptr_t	serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data*	deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}

int main(void)
{
	Data		*data_ptr = new Data(42);
	uintptr_t	ptr = serialize(data_ptr);
	Data		*ret = deserialize(ptr);

	std::cout << "Data address: " << data_ptr << " -- Value: " << data_ptr->getValue() << std::endl;
	std::cout << "Serialized value (base 10): " << ptr << " -- base(16): " << std::setbase(16) << ptr << std::setbase(10) << std::endl;
	std::cout << "Data deserialized address: " << ret << " -- Value: " << ret->getValue() << std::endl;
	delete data_ptr;
	return 0;
}
