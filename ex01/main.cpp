/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipuig-pa <ipuig-pa@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 13:58:27 by ipuig-pa          #+#    #+#             */
/*   Updated: 2025/02/02 12:29:44 by ipuig-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <cstddef>

int	main(void)
{
	Zombie	*zombie_horde;
	Zombie	*empty_horde;
	Zombie	*large_horde;
	int		i;
	int		n;

	//normal test (n = 3)
	n = 3;
	zombie_horde = zombieHorde(n, "Hordy");
	i = -1;
	while (++i < n)
		zombie_horde[i].announce();
	delete[] zombie_horde;

	//test with n = 0
	empty_horde = zombieHorde(0, "Empty");
	if (empty_horde == NULL)
		std::cout << "Empty horde is properly handled" << std::endl;
	else 
		delete[] empty_horde;

	//test with a large n (n = 150)
	large_horde = zombieHorde(150, "BigHordy");
	large_horde[0].announce();
	large_horde[149].announce();
	delete[] large_horde;

	return (0);
}
