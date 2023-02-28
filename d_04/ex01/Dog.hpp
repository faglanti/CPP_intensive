/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faglanti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 18:17:01 by faglanti          #+#    #+#             */
/*   Updated: 2022/10/18 14:17:50 by faglanti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Brain.hpp"
#ifndef DOG_HPP
#define DOG_HPP

class Dog : public Animal {
private:
	Brain* _dog_brain;
public:
	Dog();
	Dog(const Dog& copy);
	virtual ~Dog();

	Dog& operator = (const Dog& copy);
	
	void makeSound() const;
	void setIdeas(int i, const std::string str);
	std::string getIdea(int i)const;
};

#endif