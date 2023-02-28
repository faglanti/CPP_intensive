/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faglanti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 19:29:49 by faglanti          #+#    #+#             */
/*   Updated: 2022/10/18 11:43:00 by faglanti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(){
	this->_type = "WrongAnimal_default";
	std::cout << "WrongAnimal default constructor called" << std::endl;
}
WrongAnimal::WrongAnimal(std::string newType){
	this->setType(newType);
	std::cout << "WrongAnimal string constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& copy){
	this->setType(copy.getType());
	std::cout << "WrongAnimal copy constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal(){
	std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal& WrongAnimal::operator = (const WrongAnimal& copy){
	if (this == &copy)
		return *this;
	this->setType(copy.getType());
	return *this;
}

void WrongAnimal::makeSound() const{
	std::cout << this->getType() << " WrongAnimal is silent" << std::endl;
}

void WrongAnimal::setType(std::string newType){
	this->_type = newType;
}

std::string WrongAnimal::getType() const{
	return (this->_type);
}