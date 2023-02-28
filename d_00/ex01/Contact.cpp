/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faglanti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 11:17:50 by faglanti          #+#    #+#             */
/*   Updated: 2022/09/13 11:05:33 by faglanti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>
#include "Contact.hpp"

Contact::Contact()
{
}

Contact::~Contact()
{
}

void	Contact::set_firstName(std::string fName)
{
	Contact::firstName = fName;
}

std::string	Contact::get_firstName()
{
	return (Contact::firstName);
}

void	Contact::set_lastName(std::string lName)
{
	Contact::lastName = lName;
}

std::string	Contact::get_lastName()
{
	return (Contact::lastName);
}

void	Contact::set_Nickname(std::string nName)
{
	Contact::Nickname = nName;
}

std::string	Contact::get_Nickname()
{
	return (Contact::Nickname);
}

void	Contact::set_phoneNumber(std::string phNumber)
{
	Contact::phoneNumber = phNumber;
}

std::string	Contact::get_phoneNumber()
{
	return (Contact::phoneNumber);
}

void	Contact::set_darkestSecret(std::string dSecret)
{
	Contact::darkestSecret = dSecret;
}

std::string	Contact::get_darkestSecret()
{
	return (Contact::darkestSecret);
}

void	Contact::set_index(int id)
{
	// std::cout << "this is id " << id << std::endl;
	Contact::index = id;
}

int	Contact::get_index()
{
	return (Contact::index);
}

