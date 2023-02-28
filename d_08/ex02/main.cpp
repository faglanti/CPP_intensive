/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faglanti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 14:54:31 by faglanti          #+#    #+#             */
/*   Updated: 2022/11/12 09:13:36 by faglanti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include<list>

int main()
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << "TOP: " << mstack.top() << std::endl;
	mstack.pop();
	std::cout << "Size: " << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(77);
	mstack.push(7377);
	mstack.push(8737);
	mstack.push(7379);
	mstack.push(73);
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	std::cout << "=== STACK ======================" << std::endl;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
	std::cout << "==========================" << std::endl;
	MutantStack<std::string> ms;
	ms.push("first");
	ms.push("second");
	ms.push("/////////");
	ms.push("33333333");
	ms.push("abcde");
	ms.push("qwerty");
	ms.push("poiuy");
	ms.push("lkjh");
	ms.push("zzzzzzzzzzzz");
	std::cout << "top: " << ms.top() << std::endl;
	ms.pop();
	std::cout << "new top: " << ms.top() << std::endl;
	ms.push("222222222");
	ms.push("5555555555");
	ms.push("zz4444444444");
	MutantStack<std::string>::iterator it1 = ms.begin();
	MutantStack<std::string>::iterator ite1 = ms.end();
	++it1;
	--it1;
	std::cout << "=== str ===================" << std::endl;
	while (it1 != ite1)
	{
		std::cout << *it1 << std::endl;
		++it1;
	}
	return 0;
}