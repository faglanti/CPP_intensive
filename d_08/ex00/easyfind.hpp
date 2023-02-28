/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faglanti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 17:47:58 by faglanti          #+#    #+#             */
/*   Updated: 2022/11/08 18:04:57 by faglanti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP
#include <algorithm>
#include <iostream>
#include <vector>
#include <deque>
#include <list>

class NotFoundException: public std::exception{
	public:
		virtual const char *what() const throw(){
			return ("Not found");
		}
};

template <typename T>
typename T::iterator easyfind(T &t, int number){
	typename T::iterator find;
	find = std::find(t.begin(), t.end(), number);
	if (find == t.end())
		throw NotFoundException();
	return find;
}

#endif