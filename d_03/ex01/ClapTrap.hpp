/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faglanti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 14:04:32 by faglanti          #+#    #+#             */
/*   Updated: 2022/10/16 16:25:34 by faglanti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

class ClapTrap{
protected:
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

	std::string getName(void) const;
	unsigned int getHealth(void) const;
	unsigned int getEnergy(void) const;
	unsigned int getDamage(void) const;
	
	void setHealth(unsigned int amount);
	void setEnergy(unsigned int amount);
	void setDamage(unsigned int amount);
	void setName(std::string name);
};

#endif