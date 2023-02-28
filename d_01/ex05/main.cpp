/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faglanti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 12:14:32 by faglanti          #+#    #+#             */
/*   Updated: 2022/10/13 14:28:13 by faglanti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void)
{
	Harl hh;
	hh.complain("INFO");
	hh.complain("ERROR");
	hh.complain("DEBUG");
	hh.complain("WARNING");
	hh.complain("INFO");
	return (0);
}