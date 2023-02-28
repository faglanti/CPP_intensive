/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faglanti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 10:40:04 by faglanti          #+#    #+#             */
/*   Updated: 2022/10/13 19:08:21 by faglanti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#ifndef FIXED_HPP
# define FIXED_HPP


class Fixed{
private:
	int _fp_number;
	static const int _literal;
public:
	Fixed();
	Fixed(Fixed const &copy);
	~Fixed();
	int getRawBits(void) const;
	void setRawBits(int const raw);
};

#endif