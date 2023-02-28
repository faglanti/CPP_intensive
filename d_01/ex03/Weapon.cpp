/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faglanti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 17:29:32 by faglanti          #+#    #+#             */
/*   Updated: 2022/10/13 14:09:31 by faglanti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string w_type)
{
	this->_type = w_type;
}

Weapon::~Weapon()
{
}

const std::string&	Weapon::getType()
{
	return(this->_type);
}

void	Weapon::setType(std::string type)
{
	this->_type = type;
}

