/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faglanti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 11:44:36 by faglanti          #+#    #+#             */
/*   Updated: 2022/11/01 15:39:26 by faglanti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include "Form.hpp"

class Form;

class Bureaucrat{
private:
	std::string const _name;
	int _grade;
public:
	Bureaucrat();
	Bureaucrat(std:: string name, int grade);
	Bureaucrat(const Bureaucrat& copy);
	~Bureaucrat();

	Bureaucrat& operator = (const Bureaucrat& copy);

	void incrementGrade();
	void decrementGrade();
	
	std::string getName() const;
	int getGrade() const;

	void signForm(Form& example);

	class GradeTooHighException : public std::exception {
	public:
		virtual const char *what(void) const throw();
	};

	class GradeTooLowException : public std::exception {
	public:
		virtual const char *what(void) const throw();
	};
};

std::ostream& operator <<(std::ostream &out, const Bureaucrat& bu);

#endif