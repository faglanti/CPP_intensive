/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faglanti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 16:49:24 by faglanti          #+#    #+#             */
/*   Updated: 2022/10/13 13:48:21 by faglanti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
}

Zombie::Zombie(std::string str)
{
	Zombie::_name = str;
}

Zombie::~Zombie()
{
	std::cout << Zombie::_name << " died\n";
}

void	Zombie::announce()
{
	std::cout << Zombie::_name << ": BraiiiiiiinnnzzzZ...\n";
}

void	Zombie::set_name(std::string str)
{
	Zombie::_name = str;
}