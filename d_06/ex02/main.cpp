/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faglanti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 16:35:31 by faglanti          #+#    #+#             */
/*   Updated: 2022/11/04 17:08:51 by faglanti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include <cmath>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base *generate(void);
void identify(Base* p);
void identify(Base& p);

int main(){
	std::cout << "=== FIRST ==" << std::endl;
	Base *result = generate();
	identify(result);
	identify(*result);
	std::cout << "=== SECOND ==" << std::endl;
	Base *r = generate();
	identify(r);
	identify(*r);
	std::cout << "=== THIRD ==" << std::endl;
	Base *rr = generate();
	identify(rr);
	identify(*rr);
	std::cout << "=== FOURTH ==" << std::endl;
	Base *rrr = generate();
	identify(rrr);
	identify(*rrr);
	std::cout << "=== FIFTH ==" << std::endl;
	Base *rrrr = generate();
	identify(rrrr);
	identify(*rrrr);
	delete r;
	delete rr;
	delete rrr;
	delete rrrr;
	delete result;
	return 0;
}

Base *generate(void){
	int i;

	i = std::rand() % 3;
	std::cout << "random number: " << i << std::endl;
	switch (i){
		case 0: return (new A());
		case 1: return (new B());
		case 2: return (new C());
		default:
			std::cout << "Problem with randomizer" << std::endl;
			break;
	}
	return (NULL);
}

void identify(Base* p){
	A *a = dynamic_cast<A*>(p);
	if (a != NULL)
		std::cout << "class A" << std::endl;
	B *b = dynamic_cast<B*>(p);
	if (b != NULL)
		std::cout << "class B" << std::endl;
	C *c = dynamic_cast<C*>(p);
	if (c != NULL)
		std::cout << "class C" << std::endl;
}

void identify(Base& p){
	try {
		A &a = dynamic_cast<A&>(p);
		(void)a;
		std::cout << "class A" << std::endl;
		return ;
	}
	catch(std::exception &e){
	}
	try {
		B &b = dynamic_cast<B&>(p);
		(void)b;
		std::cout << "class B" << std::endl;
		return ;
	}
	catch(std::exception &e){
	}
	try {
		C &c = dynamic_cast<C&>(p);
		(void)c;
		std::cout << "class C" << std::endl;
		return ;
	}
	catch(std::exception &e){
	}
}