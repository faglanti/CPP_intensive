/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faglanti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 11:34:18 by faglanti          #+#    #+#             */
/*   Updated: 2022/10/13 19:32:57 by faglanti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	//std::cout << "Default constructor called" << std::endl;
	this->_fp_number = 0;
}

Fixed::Fixed(Fixed const &copy)
{
	// std::cout<< "Copy constructor called" << std::endl;
	if (this != &copy)
		*this = copy;
}

Fixed::Fixed(float const num_float)
{
	// std::cout << "Float constructor called" << std::endl;
	this->_fp_number = (int) roundf(num_float * (1 << Fixed::_literal));
}

Fixed::Fixed(int const num_int)
{
	// std::cout << "Int constructor called" << std::endl;
	this->_fp_number = num_int * (1 << Fixed::_literal);
}

Fixed::~Fixed()
{
	// std::cout << "Destructor called" << std::endl;
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

Fixed& Fixed::operator = (const Fixed& fix){
	// std::cout << "Copy assignment operator called" << std::endl;
	if (this == &fix)
		return *this;
	_fp_number = fix.getRawBits();
	return *this;
}

Fixed Fixed::operator + (const Fixed& plus)
{
	Fixed result;
	result.setRawBits(this->getRawBits() + plus.getRawBits());
	return (result);
}

Fixed Fixed::operator - (const Fixed& plus)
{
	Fixed result;
	result.setRawBits(this->getRawBits() - plus.getRawBits());
	return (result);
}

Fixed Fixed::operator * (const Fixed& plus)
{
	Fixed result;
	result.setRawBits(this->getRawBits() * plus.getRawBits() / (1 << this->_literal));
	return (result);
}

Fixed Fixed::operator / (const Fixed& plus)
{
	Fixed result;
	result.setRawBits(this->getRawBits() * (1 << this->_literal) / plus.getRawBits());
	return (result);
}


int Fixed::operator == (const Fixed& plus)
{
	return (this->getRawBits() == plus.getRawBits());
}

int Fixed::operator != (const Fixed& plus)
{
	return !(this->getRawBits() == plus.getRawBits());
}

int Fixed::operator >= (const Fixed& plus)
{
	return (this->getRawBits() >= plus.getRawBits());
}

int Fixed::operator <= (const Fixed& plus)
{
	return (this->getRawBits() <= plus.getRawBits());
}


int Fixed::operator > (const Fixed& plus)
{
	return (this->getRawBits() > plus.getRawBits());
}

int Fixed::operator < (const Fixed& plus)
{
	return (this->getRawBits() < plus.getRawBits());
}

//postfix
Fixed Fixed::operator ++ (int)
{
	Fixed temp(*this);
	this->setRawBits(getRawBits() + 1);
	return (temp);
}

Fixed Fixed::operator -- (int)
{
	Fixed temp(this->_fp_number);
	this->setRawBits(getRawBits() - 1);
	return (temp);

}

//prefix
Fixed Fixed::operator ++ (void)
{
	this->setRawBits(getRawBits() + 1);
	return (*this);
}


Fixed Fixed::operator -- (void)
{
	this->setRawBits(getRawBits() - 1);
	return (*this);
}

Fixed& Fixed::min(Fixed& first, Fixed& second)
{
	if (first._fp_number < second._fp_number)
		return (first);
	else
		return (second);
}

const Fixed& Fixed::min(const Fixed& first, const Fixed& second)
{
	if (first._fp_number < second._fp_number)
		return (first);
	else
		return (second);
}

Fixed& Fixed::max(Fixed& first, Fixed& second)
{
	if (first._fp_number > second._fp_number)
		return (first);
	else
		return (second);
}

const Fixed& Fixed::max(const Fixed& first, const Fixed& second)
{
	if (first._fp_number > second._fp_number)
		return (first);
	else
		return (second);
}
