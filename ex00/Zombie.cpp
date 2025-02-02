/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipuig-pa <ipuig-pa@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 12:59:52 by ipuig-pa          #+#    #+#             */
/*   Updated: 2025/02/02 14:07:10 by ipuig-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
	: name(name)
{
}

Zombie::~Zombie(void)
{
	std::cout << name + " is being destroyed" << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << name + ":  BraiiiiiiinnnzzzZ..." << std::endl;
}