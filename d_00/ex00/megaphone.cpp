/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faglanti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 14:27:16 by faglanti          #+#    #+#             */
/*   Updated: 2022/09/20 14:18:28 by faglanti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>


int main(int argc, char *argv[])
{
	std::string str;
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
	}
	else
	{
		int k = 0;
		while (++k < argc)
		{
			str = argv[k];
			int i = 0;
			while (i < (int) str.length())
			{
				putchar(toupper(str[i]));
				i++;
			}
		}
		std::cout << std::endl;
	}
	return (0);
}