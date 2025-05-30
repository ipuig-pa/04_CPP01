/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipuig-pa <ipuig-pa@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 12:37:46 by ipuig-pa          #+#    #+#             */
/*   Updated: 2025/02/04 16:12:13 by ipuig-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
//No maps allowed until module 08 
//#include <map>

//void	Harl::complain(std::string level)
// {
// 	std::map<std::string, void (Harl::*)()>				message;
// 	std::map<std::string, void (Harl::*)()>::iterator	it;

// 	message["DEBUG"] = &Harl::debug;
// 	message["INFO"] = &Harl::info;
// 	message ["WARNING"] = &Harl::warning;
// 	message ["ERROR"] = &Harl::error;
	
// 	it = message.find(level);
// 	if (it != message.end())
// 		(this->*it->second)();
// }

Harl::Harl(void)
{
}

void	Harl::complain(std::string level)
{
	std::string	levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void		(Harl::*funcs[])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	int			i;

	i = 0;
	while (i < 4)
	{
		if (level == levels[i])
		{
			std::cout << "[ " << levels[i] << " ]" << std::endl;
			(this->*funcs[i])();
		}
		i++;
	}
}

void	Harl::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger." << std::endl << "I really do!" << std::endl << std::endl;
}

void	Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money" << std::endl << "You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free." << std::endl << "I’ve been coming for years whereas you started working here since last month." << std::endl << std::endl;
}

void	Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl << std::endl;
}