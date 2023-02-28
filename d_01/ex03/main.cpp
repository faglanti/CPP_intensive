/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faglanti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 18:55:01 by faglanti          #+#    #+#             */
/*   Updated: 2022/10/03 15:27:49 by faglanti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
	{
		Weapon clubb = Weapon("crude spiked club");
		HumanA bob("Bob", clubb);
		bob.attack();
		clubb.setType("some other");
		bob.attack();
	}
	{
		Weapon club = Weapon("crude spiked club1");
		HumanB jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("some other1");
		jim.attack();
	}
	return 0;
}
