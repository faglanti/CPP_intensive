/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faglanti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 13:21:31 by faglanti          #+#    #+#             */
/*   Updated: 2022/11/04 16:37:12 by faglanti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>

int main(int argc, char **argv){
	if (argc != 2){
		std::cout << "Invalid number of arguments" << std::endl;
		return 1;
	}
	std::string str = argv[1];
	{
		int i;
		std:: cout << "char: ";
		try {
			if (str.length() == 1 && (str[0] < '0' || str[0] > '9'))
				i = static_cast<int>(str[0]);
			else
				i = std::stoi(str);
			if (i < 0 || i > 127)
				std::cout << "impossible" << std::endl;
			else if (i < 32 || i > 126)
				std::cout << "Non displayable" << std::endl;
			else{
				std::cout << "'" << static_cast<char>(i) << "'" << std::endl;
			}
		}
		catch (std::exception &e){
			std::cout << "impossible" << std::endl;
		}
	}
	{
		int i;
		std::cout << "int: ";
		try{
			if (str.length() == 1 && (str[0] < '0' || str[0] > '9'))
				i = static_cast<int>(str[0]);
			else
				i = std::stoi(str);
			std::cout << i << std::endl;
		}
		catch (std::exception &e){
			std::cout << "impossible" << std::endl;
		}
	}
	{
		float f;
		std::cout << "float: ";
		try {
			if (str.length() == 1 && (str[0] < '0' || str[0] > '9'))
				f = static_cast<float>(str[0]);
			else
				f = std::stof(str);
			std::cout << f;
			if (!std::isnan(f) && !std::isinf(f) && f == std::floor(f))
				std::cout << ".0";
			std::cout << "f" << std::endl;
		}
				catch (std::exception &e){
			std::cout << "impossible" << std::endl;
		}
	}
	{
		double d;
		std::cout << "double: ";
		try {
			if (str.length() == 1 && (str[0] < '0' || str[0] > '9'))
				d = static_cast<double>(str[0]);
			else
				d = std::stod(str);
			std::cout << d;
			if (!std::isnan(d) && !std::isinf(d) && d == std::floor(d))
				std::cout << ".0";
			std::cout << std::endl;
		}
				catch (std::exception &e){
			std::cout << "impossible" << std::endl;
		}
	}
	return 0;
}
