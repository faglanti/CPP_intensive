/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faglanti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 15:58:30 by faglanti          #+#    #+#             */
/*   Updated: 2022/11/01 18:07:10 by faglanti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP
#include "Form.hpp"

class PresidentialPardonForm: public Form {
private:
	std::string _target;
	PresidentialPardonForm();
public:
	PresidentialPardonForm(std::string const target);
	PresidentialPardonForm(const PresidentialPardonForm& copy);
	~PresidentialPardonForm();
	
	PresidentialPardonForm& operator=(const PresidentialPardonForm& example);
	std::string getTarget() const;
	void execute(Bureaucrat const &executor)const;
};

#endif
