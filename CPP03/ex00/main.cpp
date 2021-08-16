/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvachera <tvachera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 11:56:09 by tvachera          #+#    #+#             */
/*   Updated: 2021/07/19 14:43:02 by tvachera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap	jon("Jon Snow");
	ClapTrap	night_k("Night King");
	ClapTrap	arya("Arya Stark");

	jon.attack("Night King");
	night_k.takeDamage(jon.get_damage());
	night_k.attack("Jon Snow");
	jon.takeDamage(night_k.get_damage());
	arya.attack("Night King");
	night_k.takeDamage(arya.get_damage());
	jon.beRepaired(25);
	return 0;
}
