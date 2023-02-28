/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faglanti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 19:29:52 by faglanti          #+#    #+#             */
/*   Updated: 2022/10/16 19:50:09 by faglanti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

class WrongAnimal{
protected:
	std::string _type;

public:
	WrongAnimal();
	WrongAnimal(std::string newType);
	WrongAnimal(const WrongAnimal& copy);
	~WrongAnimal();

	WrongAnimal& operator = (const WrongAnimal& copy);
	void makeSound()const;
	
	void setType(std::string newType);
	std::string getType()const;
};

#endif