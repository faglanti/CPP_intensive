/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faglanti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 17:00:19 by faglanti          #+#    #+#             */
/*   Updated: 2022/10/16 17:04:03 by faglanti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

class FragTrap: public ClapTrap{
public:
	FragTrap();
	FragTrap(std::string name);
	FragTrap(const FragTrap&);
	~FragTrap();
	
	FragTrap& operator = (const FragTrap&);
	
	void highFivesGuys(void);
};

#endif