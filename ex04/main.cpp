/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipuig-pa <ipuig-pa@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 14:19:36 by ipuig-pa          #+#    #+#             */
/*   Updated: 2025/02/02 14:26:18 by ipuig-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	main(int argc, char **argv)
{
	if (argc != 4)
		return (1);
	open(argv[1]);//check for presence and execution permission
	open("")//if it does not exist, create

	return (0);
}