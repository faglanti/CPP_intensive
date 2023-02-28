/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faglanti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 18:16:59 by faglanti          #+#    #+#             */
/*   Updated: 2022/10/16 19:16:45 by faglanti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog"){
	std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(const Dog& copy) : Animal(copy){
	this->setType(copy.getType());
	std::cout << "Dog copy constructor called" << std::endl;
}

Dog::~Dog(){
	std::cout << "Dog destructor called" << std::endl;
}

Dog& Dog::operator = (const Dog& copy){
	if (this == &copy)
		return (*this);
	this->setType(copy.getType());
	return (*this);
}

void Dog::makeSound() const{
	std::cout << "Wooof" << std::endl;
}