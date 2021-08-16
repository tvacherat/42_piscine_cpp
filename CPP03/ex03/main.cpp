/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvachera <tvachera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 11:56:09 by tvachera          #+#    #+#             */
/*   Updated: 2021/07/20 00:07:50 by tvachera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main(void)
{
	DiamondTrap	jon("Jon Snow");
	
	jon.whoAmI();
	{
		DiamondTrap	night_k("Night King");
		DiamondTrap	jon_bis(jon);

		night_k.whoAmI();
		jon_bis.whoAmI();
		jon.highFivesGuys();
		night_k.attack("jon");
		jon_bis.takeDamage(night_k.get_damage());
		night_k.attack("jon");
		jon_bis.takeDamage(night_k.get_damage());
		night_k.guardGuate();
	}
	DiamondTrap arya;
	arya.whoAmI();
	arya = jon;
	arya.whoAmI();
	return 0;
}