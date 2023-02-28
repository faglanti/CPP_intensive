/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faglanti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 19:53:33 by faglanti          #+#    #+#             */
/*   Updated: 2022/11/08 15:51:37 by faglanti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

// int main(int, char**)
// {
// 	Array<int> zero(0);
// 	Array<int> nmb(10);
// 	int *tmp = new int[10];
// 	for (int i = 0; i < 10; i++) {
// 		int value = rand();
// 		nmb[i] = value;
// 		tmp[i] = value;
// 	}
	
// 	for (int i = 0; i < 10; i++){
// 		std::cout << "Arr[" << i << "] = " << nmb[i] << std::endl;
// 		std::cout << "Tmp[" << i << "] = " << tmp[i] << std::endl;
// 	}
// 	try{
// 		zero[-10] = 10;
// 	}
// 	catch (std::exception& e){
// 		std::cout << e.what() << std::endl;
// 	}
	
// 	delete [] tmp;
// 	return 0;
// }


#define MAX_VAL 750
int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }
	std::cout << "arr[15] = " << numbers[15] << std::endl;
	std::cout << "mir[15] = " << mirror[15] << std::endl;
    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;
    return 0;
}