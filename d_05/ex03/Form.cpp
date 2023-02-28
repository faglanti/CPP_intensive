/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faglanti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 18:44:14 by faglanti          #+#    #+#             */
/*   Updated: 2022/11/01 18:18:31 by faglanti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"


Form::Form() : _nameF((std::string)"naName"), _gradeSign(150), _gradeExecute(150){
	_indicator = false;
	std::cout << "Form: default constructor called" << std::endl;
}

Form::Form(std::string name, int gradeS, int gradeE)
: _nameF(name), _gradeSign(gradeS), _gradeExecute(gradeE){
	_indicator = false;
	if (_gradeSign < 1 || _gradeExecute < 1)
		throw Form::GradeTooHighException();
	if (_gradeSign > 150 || _gradeExecute > 150)
		throw Form::GradeTooLowException();
	std::cout << "Form: constructor called" << std::endl;
}

Form::Form(const Form& copy)
: _nameF(copy._nameF), _gradeSign(copy._gradeSign),
	_gradeExecute(copy._gradeExecute), _indicator(copy._indicator){
	std::cout << "Form: copy constructor called" << std::endl;
}

Form::~Form(){
	std::cout << "Form: destructor called" << std::endl;
}

Form& Form::operator=(const Form& copy){
	if (this == &copy)
		return *this;
	this->_indicator = copy._indicator;
	return *this;
}

std::string Form::getNameF()const{
	return this->_nameF;
}

int Form::getGradeSign()const{
	return this->_gradeSign;
}

int Form::getGradeExecute()const{
	return this->_gradeExecute;
}

bool Form::getIndicator()const{
	return this->_indicator;
}

void Form::beSigned(const Bureaucrat& bu){
	if (bu.getGrade() > this->getGradeSign())
		throw Form::GradeTooLowException();
	else
		this->_indicator = true;
}

const char *Form::GradeTooHighException::what() const throw(){
	return ("Form. Exception: grade is too high");
}

const char *Form::GradeTooLowException::what() const throw(){
	return ("Form. Exception: grade is too low");
}

const char *Form::FormNotSignedException::what() const throw(){
	return ("Form. Exception: form is not signed");
};

std::ostream& operator <<(std::ostream &out, const Form& example){
	out << "Form. name: " << example.getNameF() << ", signed status: " << example.getIndicator()
		<< ", grade required to sign: " << example.getGradeSign()
		<< " , grade required to execute: " << example.getGradeExecute() << std::endl;
	return out;
}