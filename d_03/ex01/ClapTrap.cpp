/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faglanti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 14:04:29 by faglanti          #+#    #+#             */
/*   Updated: 2022/10/16 16:56:56 by faglanti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    _name = "noName";
    _health = 10;
    _energy = 10;
    _damage = 0;
    std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
    _name = name;
    _health = 10;
    _energy = 10;
    _damage = 0;
    std::cout << "ClapTrap string constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& copy){
    _name = copy._name;
    _health = copy._health;
    _energy = copy._energy;
    _damage = copy._damage;
    std::cout << "ClapTrap copy constructor called" << std::endl;
}

ClapTrap::~ClapTrap(){
    std::cout << "ClapTrap destructor called" << std::endl;
}

ClapTrap& ClapTrap::operator = (const ClapTrap& copy){
    if (this == &copy)
        return (*this);
    this->_name = copy._name;
    this->_health = copy._health;
    this->_energy = copy._energy;
    this->_damage = copy._damage;
    return (*this);
}


void ClapTrap::attack(const std::string& target){
	if (this->getEnergy() < 1)
		std::cout << "ClapTrap " << this->getName() << " is exhausted, need to refill energy" << std::endl;
	else if (this->getHealth() < 1)
		std::cout << "ClapTrap " << this->getName() << " is dead" << std::endl;
	else
	{
		std::cout << "ClapTrap " << this->getName() << " attacks " << target;
		std::cout << ", causing " << this->getDamage() << " points of damage!" << std::endl;
		--this->_energy;
	}
}

void ClapTrap::takeDamage(unsigned int amount){
    if (amount < 1)
        std::cout << "ClapTrap " << this->getName() << " is lucky, damage is 0" << std::endl;
    else if (this->getHealth() < 1)
        std::cout << "ClapTrap " << this->getName() << " cannot take a damage because of death" << std::endl;
    else
    {
        if (this->getHealth() - amount == 0)
            std::cout << "ClapTrap " << this->getName() << " is been killed with damage " << amount;
        else
            std::cout << "ClapTrap " << this->getName() << " take " << amount << " points of damage";
        this->_health -= amount;
        std::cout << ". Hit points: " << this->getHealth() << std::endl;
    }
}


void ClapTrap::beRepaired(unsigned int amount){
    if (amount < 1)
        std::cout << "ClapTrap " << this->getName() << " make useless repairing" << std::endl;
    else if (this->getEnergy() < 1)
        std::cout << "ClapTrap " << this->getName() << " doesn't have enough energy for repairing" << std::endl;
    else if (this->getHealth() < 1)
        std::cout << "ClapTrap " << this->getName() << " already dead. Repairing id useless" << std::endl;
    else{
        this->_energy -= 1;
        this->_health += amount;
        std::cout << "ClapTrap " << this->getName() << " is repaired for " << amount << " hit points. Total health: " << this->getHealth() << std::endl;
    }
}

std::string ClapTrap::getName(void) const{
	return this->_name;
}

unsigned int ClapTrap::getHealth(void) const{
	return this->_health;
}

unsigned int ClapTrap::getEnergy(void) const{
	return this->_energy;
}

unsigned int ClapTrap::getDamage(void) const{
	return this->_damage;
}


void ClapTrap::setHealth(unsigned int amount)
{
	if (amount < 1)
		this->_health = 0;
	else
		this->_health = amount;
}

void ClapTrap::setEnergy(unsigned int amount)
{
	if (amount < 1)
		this->_energy = 0;
	else
		this->_energy = amount;
}

void ClapTrap::setDamage(unsigned int amount)
{
    if (amount < 1)
        this->_damage = 0;
    else
        this->_damage = amount;
}

void ClapTrap::setName(std::string name)
{
    this->_name = name;
}

