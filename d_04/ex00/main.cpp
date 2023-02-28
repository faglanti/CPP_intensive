/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faglanti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 18:17:08 by faglanti          #+#    #+#             */
/*   Updated: 2022/10/18 11:50:25 by faglanti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"
#include "Dog.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	delete meta;
	delete j;
	delete i;
	
	std::cout << "================================\n" << std::endl;
	
	const WrongAnimal* wa = new WrongAnimal();
	const WrongAnimal* wc = new WrongCat();
	std::cout << wa->getType() << std::endl;
	wa->makeSound();
	std::cout << wc->getType() << std::endl;
	wc->makeSound();
	delete wa;
	delete wc;

	// std::cout << "=========================" << std::endl;
    // const WrongAnimal* wa = new WrongAnimal();
    // const WrongAnimal* wc = new WrongCat();

    // std::cout << wa->getType() << std::endl;
	// wa->makeSound();
    // std::cout << wc->getType() << std::endl;
    // wc->makeSound();
    
    // delete wc;
    // delete wa;
	
	return 0;
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