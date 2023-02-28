/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faglanti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 11:33:10 by faglanti          #+#    #+#             */
/*   Updated: 2022/09/13 11:51:01 by faglanti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>
#include "Contact.hpp"
#include "PhoneBook.hpp"

Phonebook::Phonebook()
{
}

Phonebook::~Phonebook()
{
}

Contact Phonebook::get_contact(int index)
{
	return (_contacts[index]);
}

void Phonebook::ft_add(int id)
{
	static std::string str;
	_contacts[id].set_index(id);
	std::cout << "Enter first name\n";
	std::cin >> str;
	_contacts[id].set_firstName(str);
	std::cout << "Enter last name\n";
	std::cin >> str;
	_contacts[id].set_lastName(str);
	std::cout << "Enternickname\n";
	std::cin >> str;
	_contacts[id].set_Nickname(str);
	std::cout << "Enter phonenumber\n";
	std::cin >> str;
	_contacts[id].set_phoneNumber(str);
	std::cout << "Enter darkestsecret\n";
	std::cin >> str;
	_contacts[id].set_darkestSecret(str);
}