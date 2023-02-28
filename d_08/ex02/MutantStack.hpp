/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faglanti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 14:54:34 by faglanti          #+#    #+#             */
/*   Updated: 2022/11/12 09:49:29 by faglanti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stack>
#include <iterator>
#include <iostream>
#include<list>
#include<vector>
#ifndef MUTANRSTACK_HPP
#define MUTANTSTACK_HPP

template <class T>
class MutantStack : public std::stack<T>{
public:
	MutantStack(){}
	MutantStack(const MutantStack& copy){
		*this = copy;
	}
	~MutantStack(){}
	
	MutantStack& operator=(const MutantStack& example){
		if (this == &example)
			return *this;
		std::stack<T>::operator=(example);
		return *this;
	}
	
	typedef typename std::stack<T>::container_type::iterator iterator;
	iterator begin() {
		return std::stack<T>::c.begin();
	}
	iterator end() {
		return std::stack<T>::c.end();
	}
};

#endif