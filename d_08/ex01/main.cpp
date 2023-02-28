/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faglanti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 14:09:12 by faglanti          #+#    #+#             */
/*   Updated: 2022/11/10 15:13:05 by faglanti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	std::cout << "=== SUBJECT ===" << std::endl;
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	std::cout << "=== 1000 elem add by one===" << std::endl;
	Span th = Span(10000);
	std::vector<int> tmp;
	for (int i = 0; i < 10000; i++){
		th.addNumber(rand());
		tmp.push_back(rand());
	}
	std::cout << th.shortestSpan() << std::endl;
	std::cout << th.longestSpan() << std::endl;

	Span test = Span (10010);
	test.addNumber(1766);
	test.addNumber(166);

	
	try{
		std::cout << "=== Exception add ==" << std::endl;
		sp.addNumber(55);
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
	try{
		std::cout << "=== Exception add ==" << std::endl;
		sp.addNumber(tmp.begin(), tmp.end());
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
	try{
		std::cout << "=== Adding arr to arr ==" << std::endl;
		test.addNumber(tmp.begin(), tmp.end());
		std::cout << test.longestSpan() << std::endl;
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
	try{
		std::cout << "=== Span arr with 1 elem ==" << std::endl;
		Span spa = Span(22);
		spa.addNumber(8);
		spa.longestSpan();
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
	return 0;
}