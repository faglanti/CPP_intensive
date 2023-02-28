/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faglanti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 14:04:36 by faglanti          #+#    #+#             */
/*   Updated: 2022/10/16 17:20:23 by faglanti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	ScavTrap *scav = new ScavTrap("Superman");
	ClapTrap *clap = new ClapTrap("Robocop");
	FragTrap *frag = new FragTrap("Yoda");

	clap->attack("Batman");
	clap->takeDamage(1);
	clap->beRepaired(1);
	scav->attack("Spiderman");
	scav->takeDamage(2);
	scav->beRepaired(35);
	frag->attack("Dr. Strange");
	frag->highFivesGuys();

	delete clap;
	delete scav;
	delete frag;
	return (0);
}