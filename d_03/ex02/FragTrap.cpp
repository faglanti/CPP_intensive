/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faglanti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 17:00:16 by faglanti          #+#    #+#             */
/*   Updated: 2022/10/16 17:15:13 by faglanti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(){
	this->setName("noName");
	this->setHealth(100);
	this->setEnergy(100);
	this->setDamage(30);
	std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
	this->setName(name);
	this->setHealth(100);
	this->setEnergy(100);
	this->setDamage(30);
	std::cout << "FragTrap string constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap& copy) : ClapTrap(copy) {
	this->setName(copy.getName());
	this->setDamage(copy.getDamage());
	this->setDamage(copy.getEnergy());
	this->setHealth(copy.getHealth());
	std::cout << "FragTrap copy constructor called" << std::endl;
}

FragTrap::~FragTrap(){
	std::cout << "FragTrap destructor called" << std::endl;
}

FragTrap& FragTrap::operator = (const FragTrap& copy){
	this->setName(copy.getName());
	this->setDamage(copy.getDamage());
	this->setDamage(copy.getEnergy());
	this->setHealth(copy.getHealth());
	return (*this);
}

void FragTrap::highFivesGuys(void){
	std::cout << "FragTrap " << this->getName() << ", high five!" << std::endl;
}