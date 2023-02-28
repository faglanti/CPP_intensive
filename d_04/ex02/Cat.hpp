/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faglanti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 18:16:55 by faglanti          #+#    #+#             */
/*   Updated: 2022/10/18 14:17:55 by faglanti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Brain.hpp"
#ifndef CAT_HPP
#define CAT_HPP

class Cat : public Animal {
private:
	Brain* _cat_brain;
public:
	Cat();
	Cat(const Cat& copy);
	virtual ~Cat();

	Cat& operator = (const Cat& copy);

	void makeSound() const;
	void setIdeas(int i, const std::string str);
	std::string getIdea(int i)const;


};

#endif