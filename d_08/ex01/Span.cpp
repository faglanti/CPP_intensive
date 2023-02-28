/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faglanti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 11:35:45 by faglanti          #+#    #+#             */
/*   Updated: 2022/11/10 14:28:06 by faglanti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : _size(0){
}

Span::Span(unsigned int N) : _size(N), _currSize(0){
}

Span::Span(const Span& copy){
	*this = copy;
}

Span::~Span(){
}

Span& Span::operator=(const Span& example){
	if (this == &example)
		return *this;
	_size = example._size;
	_currSize = example._currSize;
	_varr = example._varr;
	return *this;
}

unsigned int Span::getSize() const{
	return (_size);
}

unsigned int Span::getCurrsize() const{
	return (_currSize);
}

void Span::addNumber(int number){
	if (_size > 0 && _currSize < _size){
		_varr.push_back(number);
		_currSize++;
	}
	else
		throw AddException();
}

void Span::addNumber(std::vector<int>::iterator start, std::vector<int>::iterator end){
	std::vector<int> temp;
	if (std::distance(start, end) + this->getCurrsize() > this->getSize()){
		throw AddException();
	}
	temp.assign(start, end);
	_varr.insert(_varr.end(), temp.begin(), temp.end());
}

unsigned int Span::shortestSpan() const{
	if (_varr.size() < 2)
		throw SizeException();
	std::vector<int> copy = _varr;
	std::sort(copy.begin(), copy.end());
	int result = *std::max_element(copy.begin(), copy.end()) - *std::min_element(copy.begin(), copy.end());
	for (int i = copy.size() - 1; i > 0; i--){
		if (copy[i] - copy[i - 1] < result)
			result = copy[i] - copy[i - 1];
	}
	return result;
}

unsigned int Span::longestSpan() const{
	if (_varr.size() < 2)
		throw SizeException();
	int result;
	result = *std::max_element(_varr.begin(), _varr.end()) - *std::min_element(_varr.begin(), _varr.end());
	return result;
}
