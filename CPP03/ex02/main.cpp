/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvachera <tvachera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 11:56:09 by tvachera          #+#    #+#             */
/*   Updated: 2021/07/19 14:38:41 by tvachera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
	FragTrap	jon("Jon Snow");
	ScavTrap	night_k("Night King");

	jon.attack("Night King");
	night_k.takeDamage(jon.get_damage());
	night_k.attack("Jon Snow");
	jon.takeDamage(night_k.get_damage());
	night_k.attack("Jon Snow");
	jon.takeDamage(night_k.get_damage());
	night_k.guardGuate();
	jon.highFivesGuys();
	return 0;
}
