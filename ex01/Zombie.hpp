/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipuig-pa <ipuig-pa@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 12:56:33 by ipuig-pa          #+#    #+#             */
/*   Updated: 2025/02/02 12:35:18 by ipuig-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <string>
# include <iostream>

class Zombie{

public:
	Zombie(void);
	Zombie(std::string given_name);
	~Zombie(void);
	void	announce(void);
	void	setName(std::string given_name);

private:
	std::string	name;

};

Zombie* zombieHorde( int N, std::string name );

#endif
