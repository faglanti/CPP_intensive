/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faglanti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 14:53:26 by faglanti          #+#    #+#             */
/*   Updated: 2022/10/13 14:26:28 by faglanti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<cstring>
#include<iostream>
#include <fstream>

int	main(int argc, char *argv[])
{
	if (argc != 4 || std::strlen(argv[2]) < 1)
	{
		std::cout << "Invalid number of agruments" << std::endl;
		return (1);
	}
	else
	{
		std::string str1 = argv[2];
		std::string name = argv[1];
		std::ifstream file;
		file.open(argv[1]);
		if (file.is_open())
		{
			std::ofstream final_file(name + ".replace");
			if (final_file.is_open())
			{
				std::string temp;
				int i;
				while (getline(file, temp))
				{
					i = temp.find(str1);
					if (i > -1)
					{
						final_file << temp.substr(0, i);
						final_file << argv[3];
						final_file << temp.substr(i + str1.length());
					}
					else
						final_file << temp;
					final_file << '\n';
				}
				file.close();
				final_file.close();
				return (0);
			}
			else
			{
				std::cout << "Can't create a file << " << name + ".replace" << std::endl;
				file.close();
				return (1);
			}
		}
		else
		{
			std::cout << "Can't open the file " << argv[1] << std::endl;
			return (1);
		}
	}
}
