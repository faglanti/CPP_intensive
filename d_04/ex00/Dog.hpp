/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faglanti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 18:17:01 by faglanti          #+#    #+#             */
/*   Updated: 2022/10/16 19:16:46 by faglanti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#ifndef DOG_HPP
#define DOG_HPP

class Dog : public Animal {
public:
	Dog();
	Dog(const Dog& copy);
	virtual ~Dog();

	Dog& operator = (const Dog& copy);
	
	void makeSound() const;
};

#endif