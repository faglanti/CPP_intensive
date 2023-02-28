/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faglanti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 11:44:38 by faglanti          #+#    #+#             */
/*   Updated: 2022/10/30 18:40:55 by faglanti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(){
	std::cout << "======IVAN=====" << std::endl;
	try{
		Bureaucrat q = Bureaucrat("Ivan", 10);
		q.decrementGrade();
		std::cout << q << std::endl;
		q.incrementGrade();
		std::cout << q << std::endl;
	}
	catch(std::exception &e){
		std::cout << e.what() << std::endl;
	}
	std::cout << "======INGA=====" << std::endl;
	try{
		Bureaucrat w = Bureaucrat("Inga", 150);
		w.decrementGrade();
		std::cout << w << std::endl;
		w.incrementGrade();
		std::cout << w << std::endl;
	}
	catch(std::exception &e){
		std::cout << e.what() << std::endl;
	}
	std::cout << "======ANNA=====" << std::endl;
	try{
		Bureaucrat a = Bureaucrat("Anna", 1500);
		a.decrementGrade();
		std::cout << a << std::endl;
		a.incrementGrade();
		std::cout << a << std::endl;
	}
	catch(std::exception &e){
		std::cout << e.what() << std::endl;
	}
	std::cout << "======ANDREY=====" << std::endl;
	try{
		Bureaucrat s = Bureaucrat("Andrey", 1);
		s.incrementGrade();
		std::cout << s << std::endl;
		s.decrementGrade();
		std::cout << s << std::endl;
	}
	catch(std::exception &e){
		std::cout << e.what() << std::endl;
	}
	
	return 0;
	
}