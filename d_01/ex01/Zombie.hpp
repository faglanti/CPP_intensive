/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faglanti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 16:46:11 by faglanti          #+#    #+#             */
/*   Updated: 2022/09/13 16:52:17 by faglanti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>
#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

class Zombie{
private:
	std::string _name;

public:
	Zombie();
	Zombie(std::string str);
	~Zombie();
	void	announce(void);
	void	set_name(std::string str);
};

Zombie* zombieHorde(int N, std::string name);

#endif