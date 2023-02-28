/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faglanti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 11:51:50 by faglanti          #+#    #+#             */
/*   Updated: 2022/10/18 13:57:58 by faglanti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#ifndef BRAIN_HPP
#define BRAIN_HPP

class Brain{
private:
	std::string _ideas[100];
public:
	Brain();
	Brain(const Brain& copy);
	~Brain();

	Brain& operator = (const Brain& copy);
	void setIdeaToBrain(int i, std::string str);
	std::string getIdeaFromBrain(int i)const;
};

#endif