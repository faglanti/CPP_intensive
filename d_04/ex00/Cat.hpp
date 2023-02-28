/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faglanti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 18:16:55 by faglanti          #+#    #+#             */
/*   Updated: 2022/10/16 19:01:07 by faglanti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#ifndef CAT_HPP
#define CAT_HPP

class Cat : public Animal {
public:
	Cat();
	Cat(const Cat& copy);
	virtual ~Cat();

	Cat& operator = (const Cat& copy);

	void makeSound() const;
};

#endif