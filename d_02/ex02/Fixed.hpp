/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faglanti <faglanti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 11:34:30 by faglanti          #+#    #+#             */
/*   Updated: 2022/10/08 11:55:51 by faglanti         ###   ########.fr       */
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

    Fixed& operator = (const Fixed& fix);
    Fixed operator + (const Fixed& plus);
    Fixed operator - (const Fixed& plus);
    Fixed operator * (const Fixed& plus);
    Fixed operator / (const Fixed& plus);
    int operator == (const Fixed& plus);
    int operator != (const Fixed& plus);
    int operator >= (const Fixed& plus);
    int operator <= (const Fixed& plus);
    int operator > (const Fixed& plus);
    int operator < (const Fixed& plus);

    Fixed operator ++ (int);
    Fixed operator -- (int);
    Fixed operator ++ (void);
    Fixed operator -- (void);
    
    Fixed& min(Fixed& first, Fixed& second);
    Fixed& max(Fixed& first, Fixed& second);
    static const Fixed& min(const Fixed& first, const Fixed& second);
    static const Fixed& max(const Fixed& first, const Fixed& second);
    
};

std::ostream& operator << (std::ostream &out, const Fixed &l);

# endif