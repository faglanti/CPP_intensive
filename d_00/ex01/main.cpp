/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faglanti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 18:43:21 by faglanti          #+#    #+#             */
/*   Updated: 2022/09/13 11:37:08 by faglanti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>
#include <iomanip>
#include "Contact.hpp"
#include "PhoneBook.hpp"

// void	ft_add(Contact *ct, int id);
void	ft_print(int count, Phonebook book);
void	ft_header();

int	main()
{
	std::string command;
	Phonebook book;
	int index = 0;
	int full = 0;
	
	std::cout << "This is your new phonebook.\n";
	std::cout << "You can use only 3 commands:\n";
	std::cout << "- if you want to add new contact enter ADD\n";
	std::cout << "- if you need to find somebody in your phonebook enter SEARCH\n";
	std::cout << "- you always may quit phinebook by entering EXIT\n";
	// std::cout << "Please, enter ADD, SEARCH or EXIT\n";
	while (1)
	{
		std::cout << "Please, enter ADD, SEARCH or EXIT\n";
		std::cin >> command;
		if (command.compare("ADD") == 0)
		{
			if (index == 8)
			{
				index = 0;
				full = 1;
			}
			book.ft_add(index);
			index++;
		}
		else if (command.compare("SEARCH") == 0)
		{
			if (full == 1)
				ft_print(8, book);
			else
				ft_print(index, book);
			std::cin.clear();
		}
		else if (command.compare("EXIT") == 0)
		{
			std::cout << "Program closed\n";
			break ;
		}
		else
			continue ;
	}
	return (0);
}

void ft_print(int count, Phonebook book)
{
	int	i;
	int	x;
	std::string str;
	
	i = 0;
	if (count == 0)
	{
		std::cout << "Your phonebook is empy, add some contacts to it" << std::endl;
	}
	else
	{
		std::cout << "     index|first name| last name|  nickname\n";
		while (i < count)
		{
			x = book.get_contact(i).get_index();
			std::cout << std::setw(10) << x + 1 << '|';
			if (book.get_contact(i).get_firstName().length() < 11)
				std::cout << std::setw(10) << book.get_contact(i).get_firstName() << '|';
			else
				std::cout << std::setw(9) << book.get_contact(i).get_firstName().substr(0, 9) << ".|";
			if (book.get_contact(i).get_lastName().length() < 11)
				std::cout << std::setw(10) << std::setw(10) << book.get_contact(i).get_lastName() << '|';
			else
				std::cout << std::setw(9) << book.get_contact(i).get_lastName().substr(0, 9) << ".|";
			if (book.get_contact(i).get_Nickname().length() < 11)
				std::cout << std::setw(10) << book.get_contact(i).get_Nickname() << '|' << std::endl;
			else
				std::cout << std::setw(9) << book.get_contact(i).get_Nickname().substr(0, 9) << ".|";
			i++;
		}
		std::cout << "Enter the index of contact\n";
		while (1)
		{
			std::cin >> x;
			
			if (x <= 0 || x > count)
				std::cout << "Please, enter valid index in range 1 - " << count << std::endl;
			else
			{
				x -= 1;
				std::cout << book.get_contact(x).get_firstName() << std::endl;
				std::cout << book.get_contact(x).get_lastName() << std::endl;
				std::cout << book.get_contact(x).get_phoneNumber() << std::endl;
				std::cout << book.get_contact(x).get_darkestSecret() << std::endl;
				break;
			}
		}
	}
}

