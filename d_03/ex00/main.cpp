/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faglanti <faglanti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 14:04:36 by faglanti          #+#    #+#             */
/*   Updated: 2022/10/08 16:55:57 by faglanti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap *clap = new ClapTrap("Robocop");

    clap->attack("Batman");
    clap->takeDamage(1);
    clap->beRepaired(1);
    delete clap;
    return (0);
}