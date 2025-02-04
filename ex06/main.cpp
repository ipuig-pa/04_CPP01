/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipuig-pa <ipuig-pa@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 12:37:24 by ipuig-pa          #+#    #+#             */
/*   Updated: 2025/02/04 16:16:02 by ipuig-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	get_level(std::string &str)
{
	std::string	levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int			i;

	i = 1;
	while (i <= 4)
	{
		if (str == levels[i - 1])
			return (i);
		i++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	Harl		harl;
	int			level;
	std::string	filter;

	if (argc != 2)
		return (std::cout << "Error: Invalid number of arguments" << std::endl, 1);
	filter = argv[1];
	level = get_level (filter);
	switch (level)
	{
		case 1:
			harl.complain("DEBUG");
		case 2:
			harl.complain("INFO");
		case 3:
			harl.complain("WARNING");
		case 4:
			harl.complain("ERROR");
			break ;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
	return (0);
}
