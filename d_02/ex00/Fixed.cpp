/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faglanti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 10:40:10 by faglanti          #+#    #+#             */
/*   Updated: 2022/10/13 19:08:16 by faglanti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->_fp_number = 0;
}

Fixed::Fixed(Fixed const &copy)
{
	std::cout<< "Copy constructor called" << std::endl;
	if (this != &copy)
		*this = copy;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_fp_number);
}

void Fixed::setRawBits(int const raw)
{
	this->_fp_number = raw;
}
