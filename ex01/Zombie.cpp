/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipuig-pa <ipuig-pa@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 12:59:52 by ipuig-pa          #+#    #+#             */
/*   Updated: 2024/12/21 14:20:21 by ipuig-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)
{
}

Zombie::Zombie(std::string given_name)
{
	name = given_name;
}

Zombie::~Zombie(void)
{
	std::cout << name + " is being destroyed" << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << name + ":  BraiiiiiiinnnzzzZ..." << std::endl;
}