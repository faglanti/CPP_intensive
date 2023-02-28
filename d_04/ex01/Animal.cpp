/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faglanti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 18:16:51 by faglanti          #+#    #+#             */
/*   Updated: 2022/10/21 09:49:36 by faglanti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(){
	this->setType("default");
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(std::string type){
	this->setType(type);
	std::cout << "Animal string constructor called" << std::endl;
}

Animal::Animal(const Animal& copy){
	this->setType(copy.getType());
	std::cout << "Animal copy constructor called" << std::endl;
}

Animal::~Animal(){
	std::cout << "Animal destructor called" << std::endl;
}

Animal& Animal::operator = (const Animal& copy){
	if (this == &copy)
		return *this;
	this->setType(copy.getType());
	return *this;
}

std::string Animal::getType() const{
	return (this->_type);
}

void Animal::setType(std::string newType){
	this->_type = newType;
}

void Animal::makeSound() const{
	std::cout << "Doesn't make a sound" << std::endl;
}

	void Animal::setIdeas(int i, const std::string str){
		std::cout << "Animal " << i << " idea: " << str << std::endl;
	}
	
	std::string Animal::getIdea(int) const{
		return ("Animal getIsdea");
	}