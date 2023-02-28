/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faglanti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 11:51:48 by faglanti          #+#    #+#             */
/*   Updated: 2022/10/18 13:59:14 by faglanti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain(const Brain& copy)
{
	for(int i = 0; i < 100; i++){
		_ideas[i] = copy._ideas[i];
	}
	std::cout << "Brain copy cinstructor called" << std::endl;
}

Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
}

Brain& Brain::operator = (const Brain& copy){
	if (this == &copy)
		return *this;
	for(int i = 0; i < 100; i++){
		_ideas[i] = copy._ideas[i];
	}
	return *this;
}

void Brain::setIdeaToBrain(int i, std::string str){
	if (i >= 0 && i < 100)
		this->_ideas[i] = str;
	else
		std::cout << "Brain:: Index is out of bounds (0 - 99)" << std::endl;
}

std::string Brain::getIdeaFromBrain(int i)const{
	if (i >= 0 && i < 100)
		return (this->_ideas[i]);
	else
		return ("Brain:: Index is out of bounds (0 - 99)");
}
