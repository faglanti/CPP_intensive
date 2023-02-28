/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faglanti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 17:05:58 by faglanti          #+#    #+#             */
/*   Updated: 2022/10/16 16:54:54 by faglanti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(){
	this->setName("noName");
	this->setHealth(100);
	this->setEnergy(50);
	this->setDamage(20);
	std::cout << "ScavTrap default constuctor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name){
	this->setName(name);
	this->setHealth(100);
	this->setEnergy(50);
	this->setDamage(20);
	std::cout << "ScavTrap string constuctor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& copy) : ClapTrap(copy){
	this->setName(copy.getName());
	this->setHealth(copy.getHealth());
	this->setDamage(copy.getEnergy());
	this->setDamage(copy.getDamage());
	std::cout << "ScavTrap copy constructor called" << std::endl;
}

ScavTrap::~ScavTrap(){
	std::cout << "ScavTrap destructor called" << std::endl;
}

ScavTrap& ScavTrap::operator = (const ScavTrap& copy){
	this->setName(copy.getName());
	this->setHealth(copy.getHealth());
	this->setDamage(copy.getEnergy());
	this->setDamage(copy.getDamage());
	return (*this);
}

void ScavTrap::attack(const std::string& target){
	if (this->getEnergy() < 1)
		std::cout << "ScavTrap " << this->getName() << " is exhausted, need to refill energy to attack " << target << std::endl;
	if (this->getHealth() < 1)
		std::cout << "ScavTrap " << this->getName() << " is dead" << std::endl;
	else{
		this->setEnergy(getEnergy() - 1);
		std::cout << "ScavTrap " << this->getName() << " attacks " << target << std::endl;
	}
}

void ScavTrap::guardGate(){
	std::cout << this->getName() << ", ScavTrap is now in Gate keeper mode." << std::endl;
}
