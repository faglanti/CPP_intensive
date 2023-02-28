/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faglanti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 18:17:08 by faglanti          #+#    #+#             */
/*   Updated: 2022/10/21 09:59:58 by faglanti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"
#include "Dog.hpp"
#include "Brain.hpp"


int main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	Animal *ii = new Animal();

	ii->setIdeas(0, "goooooo");
	ii->getIdea(0);
	
	delete j;//should not create a leak
	delete i;
	delete ii;
	std::cout << "==========================" << std::endl;
	Animal* arr[10];
	for (int i = 0; i < 10; i++){
		if (i % 2 == 0)
			arr[i] = new Dog();
		else
			arr[i] = new Cat();
	}
	for (int i = 0; i < 10; i++){
		std::cout << i << ": " << arr[i]->getType() <<std::endl;
	}
	arr[2]->makeSound();
	arr[2]->setIdeas(0, "00000");
	std::cout << "0 idea: " << arr[2]->getIdea(0) << ::std::endl;
	for (int i = 0; i < 10; i++){
		delete arr[i];
	}
	
	Dog dog1;
	dog1.setIdeas(0, "dog1");
	
	Dog dog2 = dog1;
	std::cout << "dog1: 0 idea: " << dog1.getIdea(0) << ::std::endl;
	std::cout << "dog2: 0 idea: " << dog2.getIdea(0) << ::std::endl;
	dog2.setIdeas(0, "new dog2");
	std::cout << "dog2: 0 idea: " << dog2.getIdea(0) << ::std::endl;
	std::cout << "dog1: 0 idea: " << dog1.getIdea(0) << ::std::endl;

	Animal *cat = new Cat();
	cat->setIdeas(0, "fish");
	cat->setIdeas(1, "milk");
	cat->setIdeas(2, "meat");
	std::cout << "0 idea: " << cat->getIdea(0) << ::std::endl;
	std::cout << "1 idea: " << cat->getIdea(1) << ::std::endl;
	std::cout << "2 idea: " << cat->getIdea(2) << ::std::endl;
	delete cat;
	return 0;
}