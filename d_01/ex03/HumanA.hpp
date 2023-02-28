/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faglanti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 17:36:54 by faglanti          #+#    #+#             */
/*   Updated: 2022/10/13 14:08:17 by faglanti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>
#include "Weapon.hpp"
#ifndef HUMANA_HPP
#define NUMANA_HPP

class HumanA
{
private:
	Weapon&	_weapon;
	std::string	_name;
public:
	HumanA(std::string name, Weapon& type);
	~HumanA();

	void	attack();
};


#endif