/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faglanti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 18:14:05 by faglanti          #+#    #+#             */
/*   Updated: 2022/11/04 19:53:02 by faglanti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP
#include <string>
#include<iostream>
#include <cctype>

template <typename T>
void	print(T const &x) {
	std::cout<< x << std::endl;
	return;
}


template<typename T>
void iter(T *array, size_t length, void (f)(T const &param)) {
	if (array == NULL || f == NULL || !length)
		return ;
	for(size_t i = 0; i < length; i++)
		f(array[i]);
}

#endif