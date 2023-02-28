/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faglanti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 11:44:33 by faglanti          #+#    #+#             */
/*   Updated: 2022/10/30 17:53:17 by faglanti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name((std::string)"defaultName"){
	_grade = 150;
	std::cout << "Bureaucrat. Default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std:: string name, int grade) : _name((std::string)name){
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		_grade = grade;
	std::cout << "Bureaucrat. Constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat& copy) : _name(copy._name), _grade(copy._grade)
{
	if (this->_grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (this->_grade > 150)
		throw Bureaucrat::GradeTooLowException();
	std::cout << "Bureaucrat. Copy constructor called" << std::endl;
}

Bureaucrat::~Bureaucrat() {
	std::cout << "Bureaucrat. Destructor called" << std::endl;
}

Bureaucrat& Bureaucrat::operator = (const Bureaucrat& copy){
	if (this == &copy)
		return *this;
	std::string* str = (std::string *)& this->_name;
	*str = copy._name;
	this->_grade = copy._grade;
	return *this;
}

void Bureaucrat::incrementGrade(){
	if (getGrade() - 1 <= 0)
		throw Bureaucrat::GradeTooHighException();
	else
		this->_grade -= 1;
}

void Bureaucrat::decrementGrade(){
	if (getGrade() + 1 > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_grade += 1;
}

std::string Bureaucrat::getName() const{
	return this->_name;
}

int Bureaucrat::getGrade() const{
	return this->_grade;
}

const char *Bureaucrat::GradeTooHighException::what() const throw() {
	return ("Exception: grade is too high");
}

const char *Bureaucrat::GradeTooLowException::what() const throw() {
	return ("Exception: grade is too low");
}

std::ostream& operator <<(std::ostream &out, const Bureaucrat& bu){
	out << bu.getName() << ", bureaucrat grade " << bu.getGrade() << std::endl;
	return out;
}
