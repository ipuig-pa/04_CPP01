/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipuig-pa <ipuig-pa@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 20:09:42 by ipuig-pa          #+#    #+#             */
/*   Updated: 2025/01/02 20:09:42 by ipuig-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon (std::string given_type)
{
	type = given_type;
}

const std::string&	Weapon::getType(void)
{
	return (type);
}

void	Weapon::setType(std::string given_type)
{
	type = given_type;
}
