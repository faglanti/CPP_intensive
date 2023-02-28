/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faglanti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 16:53:28 by faglanti          #+#    #+#             */
/*   Updated: 2022/10/13 13:44:01 by faglanti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	int i = 5;
	Zombie *horde = zombieHorde(i, "Zombak");
	if (horde)
		for (int k = 0; k < i; k++)
			horde[k].announce();
	delete [] horde;
	
	return (0);
}