/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipuig-pa <ipuig-pa@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 14:00:37 by ipuig-pa          #+#    #+#             */
/*   Updated: 2025/01/02 20:28:42 by ipuig-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	Zombie	*zombie_horde;
	int		i;

	zombie_horde = new Zombie[N];
	i = 0;
	while (i < N)
	{
		zombie_horde[i].setName(name);
		i++;
	}
	return (zombie_horde);
}