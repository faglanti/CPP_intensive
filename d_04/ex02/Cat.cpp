/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faglanti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 18:16:57 by faglanti          #+#    #+#             */
/*   Updated: 2022/10/18 14:17:59 by faglanti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat"){
	this->_cat_brain = new Brain();
	std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(const Cat& copy) : Animal(copy){
	this->setType(copy.getType());
	this->_cat_brain = new Brain(*copy._cat_brain);
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat::~Cat(){
	delete this->_cat_brain;
	std::cout << "Cat destructor called" << std::endl;
}

Cat& Cat::operator = (const Cat& copy){
	if (this == &copy)
		return *this;
	this->setType(copy.getType());
	this->_cat_brain = new Brain(*copy._cat_brain);
	return *this;
}

void Cat::makeSound() const {
	std::cout << "Meowww" << std::endl;
}

void Cat::setIdeas(int i, const std::string str){
	if (i < 100 && i >= 0)
		this->_cat_brain->setIdeaToBrain(i, str);
	else
		std::cout << "Cat Index is out of bounds (0 - 99)" << std::endl;
}

std::string Cat::getIdea(int i)const{
if (i >= 0 && i < 100)
	return (this->_cat_brain->getIdeaFromBrain(i));
else
	return ("Dog Index is out of bounds (0 - 99)");
}