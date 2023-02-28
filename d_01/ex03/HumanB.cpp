/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faglanti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 17:49:39 by faglanti          #+#    #+#             */
/*   Updated: 2022/10/13 14:10:30 by faglanti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB(std::string name)
{
	this->_name = name;
}

HumanB::~HumanB()
{
}

void	HumanB::attack()
{
	std::cout << this->_name << " attacks the enemy with a " << this->_weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon& type)
{
	this->_weapon = &type;
}