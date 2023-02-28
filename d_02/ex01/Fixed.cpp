/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faglanti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 11:34:18 by faglanti          #+#    #+#             */
/*   Updated: 2022/10/13 19:28:00 by faglanti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

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

Fixed::Fixed(float const num_float)
{
	std::cout << "Float constructor called" << std::endl;
	this->_fp_number = (int) roundf(num_float * (1 << Fixed::_literal));
}

Fixed::Fixed(int const num_int)
{
	std::cout << "Int constructor called" << std::endl;
	this->_fp_number = num_int * (1 << Fixed::_literal);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
	return (this->_fp_number);
}

void Fixed::setRawBits(int const raw)
{
	this->_fp_number = raw;
}

float Fixed::toFloat(void) const
{
	return ((float)this->_fp_number / (1 << Fixed::_literal));
}

int Fixed::toInt(void) const
{
	return ((int) this->_fp_number / (1 << Fixed::_literal));
}

std::ostream& operator << (std::ostream &out, const Fixed &l)
{
	out << l.toFloat();
	return (out);
}
