/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipuig-pa <ipuig-pa@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 20:09:39 by ipuig-pa          #+#    #+#             */
/*   Updated: 2025/02/04 12:45:47 by ipuig-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP
# include <string>
# include <iostream>
# include "Weapon.hpp"

class HumanB{

public:
	HumanB(std::string name);
	void	attack(void);
	void	setWeapon(Weapon &new_weapon);

private:
	std::string	name;
	Weapon		*weapon;
};

#endif