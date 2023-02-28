/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faglanti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 16:25:30 by faglanti          #+#    #+#             */
/*   Updated: 2022/09/13 16:33:37 by faglanti         ###   ########.fr       */
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