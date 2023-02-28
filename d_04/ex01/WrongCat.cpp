/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faglanti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 19:18:33 by faglanti          #+#    #+#             */
/*   Updated: 2022/10/18 11:43:31 by faglanti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal() {
	this->_type = "WrongCat";
	std::cout << "WrongCat default constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat& copy) : WrongAnimal(copy){
	this->setType(copy.getType());
	std::cout << "WrongCat copy constructor called" << std::endl;
}

WrongCat::~WrongCat(){
	std::cout << "Wrongcat default constructor called" << std::endl;
}

WrongCat& WrongCat::operator = (const WrongCat& copy){
	if (this == &copy)
		return *this;
	this->setType(copy.getType());
	return *this;
}

void WrongCat::makeSound() const{
	std::cout << this->getType() << " MeooWoooooff" << std::endl;
}




// int main()
// {
//     const Animal* meta = new Animal();
//     const Animal* j = new Dog();
//     const Animal* i = new Cat();

//     std::cout << "dog "<<j->getType() << " " << std::endl;
//     std::cout << "cat "<<i->getType() << " " << std::endl;
//     std::cout << "Animal "<<meta->getType() << " " << std::endl;
//     i->makeSound(); //will output the cat sound!
//     j->makeSound();
//     meta->makeSound();
//     delete meta;
//     delete i;
//     delete j;
//     std::cout << "=========================" << std::endl;
//     const WrongAnimal* wrongAnimal = new WrongAnimal();
//     const WrongAnimal* badCat = new WrongCat();

//     std::cout << wrongAnimal->getType() << std::endl;
//     std::cout << badCat->getType() << std::endl;
//     badCat->makeSound();
//     wrongAnimal->makeSound();
//     delete badCat;
//     delete wrongAnimal;
//     return 0;
// }