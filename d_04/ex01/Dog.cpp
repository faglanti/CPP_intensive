/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faglanti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 18:16:59 by faglanti          #+#    #+#             */
/*   Updated: 2022/10/18 14:18:06 by faglanti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog"){
	this->_dog_brain = new Brain();
	std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(const Dog& copy) : Animal(copy){
	this->setType(copy.getType());
	this->_dog_brain = new Brain(*copy._dog_brain);
	std::cout << "Dog copy constructor called" << std::endl;
}

Dog::~Dog(){
	delete this->_dog_brain;
	std::cout << "Dog destructor called" << std::endl;
}

Dog& Dog::operator = (const Dog& copy){
	if (this == &copy)
		return (*this);
	this->setType(copy.getType());
	this->_dog_brain = new Brain(*copy._dog_brain);
	return (*this);
}

void Dog::makeSound() const{
	std::cout << "Wooof" << std::endl;
}

void Dog::setIdeas(int i, const std::string str){
	if (i < 100 && i >= 0)
		this->_dog_brain->setIdeaToBrain(i, str);
	else
		std::cout << "Dog Index is out of bounds (0 - 99)" << std::endl;
}

std::string Dog::getIdea(int i)const{
	if (i >= 0 && i < 100)
		return (this->_dog_brain->getIdeaFromBrain(i));
	else
		return ("Dog Index is out of bounds (0 - 99)");
}