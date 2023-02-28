/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faglanti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 15:58:33 by faglanti          #+#    #+#             */
/*   Updated: 2022/11/01 18:37:28 by faglanti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP
#include "Form.hpp"

class RobotomyRequestForm: public Form {
private:
	std::string _target;
	RobotomyRequestForm();
public:
	RobotomyRequestForm(std::string const target);
	RobotomyRequestForm(const RobotomyRequestForm& example);
	~RobotomyRequestForm();
	
	RobotomyRequestForm& operator = (const RobotomyRequestForm& copy);
	std::string getTarget() const;
	void execute(Bureaucrat const &executor)const;
};

#endif
