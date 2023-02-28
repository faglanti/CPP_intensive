/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faglanti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 17:12:42 by faglanti          #+#    #+#             */
/*   Updated: 2022/11/04 18:09:49 by faglanti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP
#include <iostream>

template<typename T>
void swap(T& a, T&b){
	T tmp = b;
	b = a;
	a = tmp;
}

template<typename T>
T min(T const a, T const b){
	if (a < b)
		return a;
	return b;
}

template<typename T>
T max(T const a, T const b){
	if (a > b)
		return a;
	return b;
}

#endif