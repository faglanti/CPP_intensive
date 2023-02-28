/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faglanti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 14:04:36 by faglanti          #+#    #+#             */
/*   Updated: 2022/10/16 16:53:58 by faglanti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"


int main()
{
	ScavTrap *scav = new ScavTrap("Superman");
	ClapTrap *clap = new ClapTrap("Robocop");

	clap->attack("Batman");
	clap->takeDamage(1);
	clap->beRepaired(1);
	scav->attack("Robin");
	scav->takeDamage(2);
	scav->beRepaired(35);

	delete clap;
	delete scav;
	return (0);
}