/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faglanti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 11:44:38 by faglanti          #+#    #+#             */
/*   Updated: 2022/11/02 11:17:25 by faglanti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main(){
	// Form ll("legal", 1, 1);
	Form *q = new ShrubberyCreationForm("A00");
	std::cout << q << std::endl;
	Form *qq = new RobotomyRequestForm("A01");
	std::cout << qq << std::endl;
	Form *qqq = new PresidentialPardonForm("A02");
	std::cout << qqq << std::endl;
	try{
		Bureaucrat super("Super", 1);
		std::cout << super << std::endl;
		Bureaucrat kafka("Kafka", 12);
		std::cout << kafka << std::endl;

		std::cout << "== ShrubberyCreationForm A00 ==" << std::endl;
		q->beSigned(super);
		q->execute(kafka);

		std::cout << "== RobotomyRequestForm A01 ==" << std::endl;
		super.signForm(*qq);
		qq->execute(kafka);
		qq->execute(super);
		
		std::cout << "== PresidentialPardonForm A02 ==" << std::endl;
		qqq->beSigned(super);
		qqq->execute(super);
	}
	catch(std::exception &e){
		std::cout << e.what() << std::endl;
	}
	delete q;
	delete qq;
	delete qqq;
	return 0;
}


