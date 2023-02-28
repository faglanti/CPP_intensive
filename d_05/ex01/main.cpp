/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faglanti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 11:44:38 by faglanti          #+#    #+#             */
/*   Updated: 2022/11/01 15:52:44 by faglanti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"


int main(){
	try{
		Bureaucrat q = Bureaucrat("Ivan", 10);
		std::cout << q << std::endl;
		Form qq("Form 01", 20, 20);
		std::cout << qq << std::endl;
		Form qqq("Form 02", 2, 2);
		std::cout << qqq << std::endl;
		q.signForm(qq);
		q.signForm(qqq);
	}
	catch(std::exception &e){
		std::cout << e.what() << std::endl;
	}
	try{
		Bureaucrat w = Bureaucrat("Inga", 1);
		std::cout << w << std::endl;
		Form ww("Form 03", 2, 2);
		std::cout << ww << std::endl;
		w.signForm(ww);
		Bureaucrat e = Bureaucrat("Inna", 2);
		e.signForm(ww);
	}
	catch(std::exception &e){
		std::cout << e.what() << std::endl;
	}
	return 0;
}
