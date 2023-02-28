/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faglanti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 17:47:53 by faglanti          #+#    #+#             */
/*   Updated: 2022/11/10 15:09:51 by faglanti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <deque>
#include <list>
#include <array>


int main(){
	std::cout << "===== VECTOR =====" << std::endl;
	std::vector<int> vectors;
	vectors.push_back(10);
	vectors.push_back(1);
	vectors.push_back(0);
	vectors.push_back(-11);
	vectors.push_back(109);
	vectors.push_back(910);
	vectors.push_back(210);
	try {
		std::cout << "10" << std::endl;
		easyfind(vectors, 10);
		std::cout << "0" << std::endl;
		easyfind(vectors, 0);
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	try {
		std::cout << "310 exc" << std::endl;
		easyfind(vectors, 310);
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	
	std::cout << "===== DEQUE =====" << std::endl;
	std::deque<int> deq;
	deq.push_back(10);
	deq.push_front(-57);
	deq.push_back(-910);
	deq.push_front(857);
	deq.push_back(-1011);
	deq.push_front(5977);
	
	try{
		std::cout << "-57" << std::endl;
		easyfind(deq, -57);
	}
		catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	try{
		std::cout << "11 exc" << std::endl;
		easyfind(deq, 11);
	}
		catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << "===== LIST =====" << std::endl;
	std::list<int> lists;
	lists.push_back(55);
	lists.push_front(-55);
	lists.push_back(155);
	lists.push_front(-155);
	lists.push_back(555);
	lists.push_front(-555);
	try{
		std::cout << "-555" << std::endl;
		easyfind(lists, -555);
	}
		catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	try{
		std::cout << "56 exc" << std::endl;
		easyfind(lists, 56);
	}
		catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << "===== ARRAY =====" << std::endl;
	
	std::array<int, 6> arr = {9, 15, -99, 7, 23, 88};
	try{
		std::cout << "-99" << std::endl;
		easyfind(arr, -99);
	}
		catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	try{
		std::cout << "-5 exc" << std::endl;
		easyfind(arr, -5);
	}
		catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	return 0;
}