/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faglanti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 11:44:38 by faglanti          #+#    #+#             */
/*   Updated: 2022/11/02 12:12:22 by faglanti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main(){
	try{
		Intern someRandomIntern;
		Form* rrf;
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		Bureaucrat q("Karl", 5);
		q.signForm(*rrf);
		q.executeForm(*rrf);
		std::cout << "======" << std::endl;
		Form *a;
		a = someRandomIntern.makeForm("shrubbery creation", "work");
		q.signForm(*a);
		q.executeForm(*a);
		std::cout << "======" << std::endl;
		delete rrf;
		delete a;
	}
	catch(std::exception &e){
		std::cout << e.what() << std::endl;
	}

	try{
		std::cout << "======" << std::endl;
		Intern random;
		Form *rrf;
		rrf = random.makeForm("reader request", "Library");
		Bureaucrat q("Karl", 5);
		q.signForm(*rrf);
		q.executeForm(*rrf);
		delete rrf;
	}
	catch(std::exception &e){
		std::cout << e.what() << std::endl;
	}
	return 0;
}


