/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipuig-pa <ipuig-pa@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 20:09:36 by ipuig-pa          #+#    #+#             */
/*   Updated: 2025/02/02 14:13:58 by ipuig-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
	: name(name), weapon(NULL)
{
}

void	HumanB::setWeapon(Weapon &new_weapon)
{
	weapon = &new_weapon;
}

void	HumanB::attack(void)
{
	if (weapon)
		std::cout << name + " attacks with their " +  weapon->getType() << std::endl;
	else
		std::cout << name + " has no weapon to attack with!" << std::endl;
}