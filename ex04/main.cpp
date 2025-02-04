/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipuig-pa <ipuig-pa@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 14:19:36 by ipuig-pa          #+#    #+#             */
/*   Updated: 2025/02/04 12:33:35 by ipuig-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>

//check for empty strings
//check for more han one occurrance of s1 in the same line
//compare with sed output: sed 's/Hello world/Hihihi/g' test > test.replace VS ./replace test "Hello world" "Hihihi"

int	replace(std::ifstream &file, std::string &filename, std::string &s1, std::string &s2)
{
	std::ofstream	rep_file;
	std::string		output;
	std::string		line;
	std::size_t		found;

	output = filename + ".replace";
	rep_file.open(output);
	if (rep_file.is_open())
	{
		while (std::getline (file, line))
		{
			found = line.find(s1);
			while (found != std::string::npos)
			{
				line.erase(found, s1.length());
				line.insert(found, s2);
				found = line.find(s1);
			}
			rep_file << line;
			if (!file.eof())
				rep_file << std::endl;
		}
		return (rep_file.close(), 1);
	}
	else
		return (std::cout << "Error: Unable to create " << output << " file" << std::endl, 0);
}

int	main(int argc, char **argv)
{
	std::ifstream	file;
	std::string		filename;
	std::string		s1;
	std::string		s2;
	
	if (argc != 4)
		return (std::cout << "Error: Invalid number of args" << std::endl, 1);
	filename = argv[1];
	s1 = argv[2];
	s2 = argv[3];
	if (s1.empty())
		return (std::cout << "Error: String1 cannot be empty" << std::endl, 1);
	file.open(filename);
	if (file.is_open())
	{
		if (!replace(file, filename, s1, s2))
			return (file.close(), 1);
		return (file.close(), 0);
	}
	else
		return (std::cout << "Error: Unable to open " << argv[1] << " file" << std::endl, 1);
}
