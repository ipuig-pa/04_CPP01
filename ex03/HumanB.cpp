/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipuig-pa <ipuig-pa@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 20:09:36 by ipuig-pa          #+#    #+#             */
/*   Updated: 2025/01/02 20:09:36 by ipuig-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string given_name)
{
	name = given_name;
}

void	HumanB::setWeapon(std::string given_type)
{
	weapon.setType(given_type);
}

void	HumanB::attack(void)
{
	std::cout << name + "attacks with their" +  weapon.getType() << std::endl;
}