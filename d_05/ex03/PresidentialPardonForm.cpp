/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faglanti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 15:58:26 by faglanti          #+#    #+#             */
/*   Updated: 2022/11/01 20:09:20 by faglanti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"

PresidentialPardonForm::PresidentialPardonForm() :
	Form("noName", 25, 5), _target("default"){
	std::cout << "PresidentialPardonForm. Default constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm (std::string const target) :
	Form("PresidentialPardonForm", 25, 5), _target(target){
	std::cout << "PresidentialPardonForm. Constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& copy){
	*this = copy;
	std::cout << "PresidentialPardonForm. Copy constructor called" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm(){
	std::cout << "PresidentialPardonForm. Destructor called" << std::endl;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& example){
	if (this == &example)
		return *this;
	return *this;
}

std::string PresidentialPardonForm::getTarget()const {
	return this->_target;
}

void PresidentialPardonForm::execute(Bureaucrat const &executor)const {
	if (executor.getGrade() > this->getGradeExecute())
		throw Bureaucrat::GradeTooLowException();
	else if (this->getIndicator() == false)
		throw Form::FormNotSignedException();
	else{
		std::cout << this->getTarget() << " has been pardoned by Zaphod Beeblebrox" << std::endl;
	}
}
