/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faglanti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 12:20:13 by faglanti          #+#    #+#             */
/*   Updated: 2022/11/10 17:39:59 by faglanti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

struct Data {
	std::string	str;
	int			i;
};

uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);

int main() {
	Data data;
	data.str = "structure Data";
	data.i = 15;
	std::cout << "address: " << &data << ", str: " << data.str << ", int: " << data.i << std::endl;
	uintptr_t uptr;
	uptr = serialize(&data);
	std::cout << "after serialization: " << uptr << std::endl;
	Data *data2;
	data2 = deserialize(uptr);
	std::cout << "after deserialization: " << data2 << ", str: " << data2->str << ", int: " <<  data2->i << std::endl;
	return 0;
}

uintptr_t serialize(Data* ptr){
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw){
	return (reinterpret_cast<Data *>(raw));
}
