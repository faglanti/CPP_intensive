/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faglanti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 11:33:29 by faglanti          #+#    #+#             */
/*   Updated: 2022/09/13 10:41:49 by faglanti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include <iostream>
#include <cstring>
#include "Contact.hpp"

class Phonebook
{
	private:
		Contact _contacts[8];
	
	public:
		Phonebook(void);
		~Phonebook(void);

		Contact get_contact(int index);
		void	ft_add(int id);
};

#endif
