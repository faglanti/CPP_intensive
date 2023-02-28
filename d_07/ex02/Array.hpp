/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faglanti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 19:53:56 by faglanti          #+#    #+#             */
/*   Updated: 2022/11/11 10:00:24 by faglanti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP
#include <iostream>
#include <exception>
#include <cctype>

template<typename T>
class Array{
private:
	T	*_array;
	unsigned int _size;
public:
	Array();
	Array(unsigned int size);
	Array(const Array<T> &copy);
	~Array();

	Array& operator=(Array const &example);
	T& operator[](unsigned int number);

	unsigned int size() const;

	class IndexException : public std::exception {
	public:
		virtual const char *what() const throw();
	};
};

#include "Array.tpp"
#endif