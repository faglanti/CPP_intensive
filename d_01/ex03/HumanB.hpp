/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faglanti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 17:48:47 by faglanti          #+#    #+#             */
/*   Updated: 2022/10/13 14:10:47 by faglanti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>
#include "Weapon.hpp"
#ifndef HUMANB_HPP
#define NUMANB_HPP

class HumanB
{
private:
	Weapon*		_weapon;
	std::string	_name;
public:
	HumanB(std::string name);
	~HumanB();

	void	attack();
	void	setWeapon(Weapon& type);
};

#endif