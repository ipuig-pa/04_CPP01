/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipuig-pa <ipuig-pa@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 14:00:37 by ipuig-pa          #+#    #+#             */
/*   Updated: 2024/12/21 16:24:10 by ipuig-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


//do I have to include any checking function to check for proper allocation?
Zombie* zombieHorde( int N, std::string name )
{
	Zombie	*zombie_horde;
	int		i;

	zombie_horde = new Zombie[N];
	i = 0;
	while (i < N)
	{
		zombie_horde[i].set_name(name);
		i++;
	}
	return (zombie_horde);
}