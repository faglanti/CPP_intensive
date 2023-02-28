/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faglanti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 20:28:29 by faglanti          #+#    #+#             */
/*   Updated: 2022/11/02 10:56:50 by faglanti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern(){
	std::cout << "Intern.Default constructor called" << std::endl;
}

Intern::Intern(const Intern& copy){
	*this = copy;
	std::cout << "Intern. Copy constructor called" << std::endl;
}

Intern::~Intern(){
	std::cout << "Intern.Destructor called" << std::endl;
}

Intern& Intern::operator=(const Intern& example){
	if (this == &example)
		return *this;
	return *this;
}

const char *Intern::InvalidFormType::what() const throw(){
	return ("Intern. Exception: invalid form type");
}

Form *Intern::makeForm(std::string nameForm, std::string target){
	Form *result = nullptr;
	std::string nameF[3] = {"presidential pardon", "robotomy request", "shrubbery creation"};
	Form *forms[3] = {new PresidentialPardonForm(target), new RobotomyRequestForm(target), new ShrubberyCreationForm(target)};
	for (int i = 0; i < 3; i++){
		if (nameF[i] == nameForm){
			result = forms[i];
			std::cout << "Intern creates " << nameForm << std::endl;
			for (int a = 0; a < 3; a++){
				if (a != i)
					delete forms[a];
			}
			return result;
		}
	}
	delete forms[0];
	delete forms[1];
	delete forms[2];
	throw Intern::InvalidFormType();
	return result;
}