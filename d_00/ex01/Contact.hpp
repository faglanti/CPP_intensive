/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faglanti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 18:45:29 by faglanti          #+#    #+#             */
/*   Updated: 2022/09/13 10:41:15 by faglanti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>
#ifndef CONTACT_H
# define CONTACT_H

class Contact {

public:
	static int counter;
	
	void set_firstName(std::string fName);
	std::string get_firstName();
	void set_lastName(std::string lName);
	std::string get_lastName();
	void set_Nickname(std::string nName);
	std::string get_Nickname();
	void set_phoneNumber(std::string phNumber);
	std::string get_phoneNumber();
	void set_darkestSecret(std::string dSecret);
	std::string get_darkestSecret();
	void set_index(int id);
	int get_index();
	
	Contact(void);
	~Contact(void);

private:
	std::string firstName;
	std::string lastName;
	std::string Nickname;
	std::string phoneNumber;
	std::string darkestSecret;
	int	index;

};

#endif
