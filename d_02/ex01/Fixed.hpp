/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faglanti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 11:34:30 by faglanti          #+#    #+#             */
/*   Updated: 2022/10/13 19:28:28 by faglanti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cmath>
#include <iostream>
#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed
{
private:
	int _fp_number;
	static const int _literal = 8;
public:
	Fixed();
	Fixed(Fixed const &copy);
	Fixed(float const num_float);
	Fixed(int const num_int);
	~Fixed();
	float toFloat(void) const;
	int toInt(void) const;
	int getRawBits(void) const;
	void setRawBits(int const raw);
};

std::ostream& operator << (std::ostream &out, const Fixed &l);

# endif