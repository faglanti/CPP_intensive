/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faglanti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 11:00:41 by faglanti          #+#    #+#             */
/*   Updated: 2022/11/10 14:43:18 by faglanti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP
#include <vector>
#include <iterator>
#include <iostream>

class Span {
private:
	unsigned int _size;
	unsigned int _currSize;
	std::vector<int> _varr;
	
	Span();
public:
	Span(unsigned int N);
	Span(const Span& copy);
	~Span();
	
	Span& operator=(const Span& example);
	unsigned int getSize() const;
	unsigned int getCurrsize() const;
	
	void addNumber(int number);
	void addNumber(std::vector<int>::iterator start, std::vector<int>::iterator end);
	unsigned int shortestSpan() const;
	unsigned int longestSpan() const;
	
	class AddException : public std::exception{
		public:
		virtual const char *what() const throw(){
			return ("Span Exception. This storage is full. Can't add items");
		}
	};
	

	class SizeException : public std::exception{
	public:
		virtual const char *what() const throw(){
			return ("Span Exception. This storage is too small for span");
		}
	};
};

#endif