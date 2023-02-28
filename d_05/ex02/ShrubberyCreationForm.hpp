/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faglanti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 15:58:41 by faglanti          #+#    #+#             */
/*   Updated: 2022/11/01 19:13:27 by faglanti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP
#include "Form.hpp"
#include "Bureaucrat.hpp"
#include <fstream>

class ShrubberyCreationForm: public Form {
private:
	std::string _target;
	ShrubberyCreationForm();
public:
	ShrubberyCreationForm(std::string const target);
	ShrubberyCreationForm(const ShrubberyCreationForm& example);
	~ShrubberyCreationForm();
	
	ShrubberyCreationForm& operator = (const ShrubberyCreationForm& copy);
	std::string getTarget() const;
	void execute(Bureaucrat const &executor)const;

	class FileProblemException : public std::exception {
	public:
		virtual const char *what(void) const throw();
	};
};


#endif
