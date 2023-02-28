/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faglanti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 14:04:32 by faglanti          #+#    #+#             */
/*   Updated: 2022/10/16 11:33:14 by faglanti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

class ClapTrap{
private:
	std::string _name;
	unsigned int _health;
	unsigned int _energy;
	unsigned int _damage;
public:
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap&);
	~ClapTrap();
	ClapTrap& operator = (const ClapTrap&);
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	std::string getName(void);
	unsigned int getHealth(void);
	unsigned int getEnergy(void);
	unsigned int getDamage(void);

};

#endif