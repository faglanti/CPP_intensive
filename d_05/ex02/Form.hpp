/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faglanti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 18:44:12 by faglanti          #+#    #+#             */
/*   Updated: 2022/11/02 12:51:29 by faglanti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#ifndef FORM_HPP
#define FORM_HPP
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form{
private:
	std::string const _nameF;
	int const _gradeSign;
	int const _gradeExecute;
	bool _indicator;

public:
	Form();
	Form(std::string name, int gradeS, int gradeE);
	Form(const Form& copy);
	virtual ~Form();

	Form& operator = (const Form& copy);
	std::string getNameF()const;
	
	int getGradeSign()const;
	int getGradeExecute()const;
	bool getIndicator()const;
	
	void beSigned(const Bureaucrat& bu);
	virtual void execute(Bureaucrat const &executor)const = 0;

	class GradeTooHighException : public std::exception {
	public:
		virtual const char *what(void) const throw();
	};

	class GradeTooLowException : public std::exception {
	public:
		virtual const char *what(void) const throw();
	};

	class FormNotSignedException : public std::exception {
	public:
		virtual const char *what(void) const throw();
	};
};

std::ostream& operator <<(std::ostream &out, const Form& aa);

#endif