/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipuig-pa <ipuig-pa@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 20:09:30 by ipuig-pa          #+#    #+#             */
/*   Updated: 2025/01/02 20:09:30 by ipuig-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string given_name, std::string given_type)
{
	weapon.setType(given_type);
	name = given_name;
}

void	HumanA::attack(void)
{
	std::cout << name + "attacks with their" + weapon.getType() << std::endl;
}