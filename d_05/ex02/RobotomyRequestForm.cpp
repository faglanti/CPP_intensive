/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faglanti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 15:58:36 by faglanti          #+#    #+#             */
/*   Updated: 2022/11/01 18:44:10 by faglanti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"


RobotomyRequestForm::RobotomyRequestForm() :
	Form("noName", 72, 45), _target("default"){
	std::cout << "RobotomyRequestForm. Default constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string const target) :
	Form("RobotomyRequestForm", 72, 45), _target(target) {
	std::cout << "RobotomyRequestForm. Constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& example) {
	*this = example;
	std::cout << "RobotomyRequestForm. Copy constructor called" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm(){
	std::cout << "RobotomyRequestForm. Destructor called" << std::endl;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& copy){
	if (this == &copy)
		return (*this);
	return (*this);
}

std::string RobotomyRequestForm::getTarget() const {
	return this->_target;
}

void RobotomyRequestForm::execute(Bureaucrat const &executor)const{
	if (executor.getGrade() > this->getGradeExecute())
		throw Bureaucrat::GradeTooLowException();
	else if (this->getIndicator() == false)
		throw Form::FormNotSignedException();
	else {
		std::cout << "*some drilling noises*" << std::endl;
		if (executor.getGrade() % 2 == 0)
			std::cout << this->getTarget() << " has been robotomized successfully" << std::endl;
		else
			std::cout << this->getTarget() << " robotomy failed" << std::endl;
	}
}