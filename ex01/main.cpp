/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipuig-pa <ipuig-pa@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 13:58:27 by ipuig-pa          #+#    #+#             */
/*   Updated: 2024/12/21 14:21:09 by ipuig-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	*zombie_horde;
	int		i;
	int		n;

	n = 3;
	zombie_horde = zombieHorde(n, "Hordy");
	i = -1;
	while (++i < n)
		zombie_horde[i].announce();
	delete zombie_horde;
}