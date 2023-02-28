/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faglanti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 20:28:32 by faglanti          #+#    #+#             */
/*   Updated: 2022/11/02 10:21:46 by faglanti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP
#include "Form.hpp"

class Form;

class Intern{
public:
	Intern();
	Intern(const Intern& copy);
	~Intern();

	Intern& operator=(const Intern& example);
	Form *makeForm(std::string nameForm, std::string target);

	class InvalidFormType : public std::exception {
	public:
		virtual const char *what(void) const throw();
	};
};

#endif