/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faglanti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 18:14:12 by faglanti          #+#    #+#             */
/*   Updated: 2022/11/04 19:52:17 by faglanti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>
#include <cctype>

int main(){
	std::cout << "===== INT" << std::endl;
	int array[] = {3, -3, 9 , -9, 100, -100, 101010, -101010};
	size_t length = size_t(sizeof(array) / sizeof(array[0]));
	iter(array, length, print);
	std::cout << std::endl;

	std::cout << "===== CHAR" << std::endl;
	char str_arr[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g'};
	length = size_t(sizeof(str_arr) / sizeof(str_arr[0]));
	iter(str_arr, length, print);
	std::cout << std::endl;
	
	std::cout << "===== DOUBLE" << std::endl;
	double d_arr[] = {42.2, -89.09, 177, -23, 0, -9090.99, 4242};
	length = size_t(sizeof(d_arr) / sizeof(d_arr[0]));
	iter(d_arr, length, print);
	return 0;
}


// class Awesome {
// private:
// 	int _n;
// public:
// 	Awesome(void) : _n(42) {return;}
// 	int get() const { return this->_n;}
// };

// std::ostream & operator<<(std::ostream &o, Awesome const &rhs) {o << rhs.get(); return o;}

// int main() {
// 	int tab[] = {0, 1 ,2,3,4};
// 	Awesome tab2[5];

// 	iter(tab, 5, print);
// 	iter(tab2, 5, print);
// }