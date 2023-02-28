/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faglanti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 15:58:38 by faglanti          #+#    #+#             */
/*   Updated: 2022/11/01 19:39:27 by faglanti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() :
	Form("noName", 145, 137), _target("default"){
	std::cout << "ShrubberyCreationForm. Default constructor called" << std::endl;
	
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const target) :
	Form ("ShrubberyCreationForm", 145, 137), _target(target){
	std::cout << "ShrubberyCreationForm. Constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& example){
	*this = example;
	std::cout << "ShrubberyCreationForm. Copy constructor called" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm(){
	std::cout << "ShrubberyCreationForm. Destructor called" << std::endl;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator = (const ShrubberyCreationForm& copy){
	if (this == &copy)
		return (*this);
	return (*this);
}

std::string ShrubberyCreationForm::getTarget() const{
	return this->_target;
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor)const{
	if (executor.getGrade() > this->getGradeExecute())
		throw Bureaucrat::GradeTooLowException();
	else if (this->getIndicator() == false)
		throw Form::FormNotSignedException();
	else {
		std::ofstream file(this->_target + "_shrubbery");
		if (file.is_open() == false)
			throw FileProblemException();
		file << "    *        *    " << std::endl;
		file << "   ***      ***   " << std::endl;
		file << "  '****    '****  " << std::endl;
		file << "  ****;    ****;  " << std::endl;
		file << "  *****    *****  " << std::endl;
		file << "   \\//*     \\//*  " << std::endl;
		file << "   ||       ||    " << std::endl;
		file << ".................." << std::endl;
		file.close();
	}
}

const char *ShrubberyCreationForm::FileProblemException::what() const throw(){
	return ("ShrubberyCreationForm. Exception: problem with file");
};