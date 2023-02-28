/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faglanti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 18:16:53 by faglanti          #+#    #+#             */
/*   Updated: 2022/10/16 18:46:35 by faglanti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#ifndef ANIMAL_HPP
#define ANIMAL_HPP

class Animal{
protected:
	std::string _type;
public:
	Animal();
	Animal(std::string type);
	Animal(const Animal& copy);
	virtual ~Animal();
	
	Animal& operator = (const Animal& copy);
	
	std::string getType() const;
	void setType(std::string newType);
	
	virtual void makeSound() const;
};

#endif