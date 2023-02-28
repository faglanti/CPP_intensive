/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faglanti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 12:20:36 by faglanti          #+#    #+#             */
/*   Updated: 2022/09/13 15:53:38 by faglanti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <ctime>
#include <iostream>
#include <iomanip>

int		Account::_nbAccounts = 0;
int		Account::_totalAmount = 0;
int		Account::_totalNbDeposits = 0;
int		Account::_totalNbWithdrawals = 0;

Account::Account()
{
}

Account::Account(int initial_deposit)
{
	Account::_accountIndex = Account::_nbAccounts++;
	Account::_amount = initial_deposit;
	Account::_nbDeposits = 0;
	Account::_nbWithdrawals = 0;
	Account::_totalAmount += initial_deposit;
	Account::_displayTimestamp();
	std::cout << "index:" << Account::_accountIndex << ";amount:" << Account::_amount << ";created\n";
}

Account::~Account()
{
	Account::_displayTimestamp();
	std::cout << "index:" << Account::_accountIndex << ";amount:" << Account::_amount << ";closed\n";
}

int	Account::getNbAccounts(void)
{
	return (Account::_nbAccounts);
}

int	Account::getTotalAmount(void)
{
	return (Account::_totalAmount);
}

int	Account::getNbDeposits(void)
{
	return (Account::_totalNbDeposits);
}

int	Account::getNbWithdrawals(void)
{
	return (Account::_totalNbWithdrawals);
}

void	Account::displayAccountsInfos(void)
{
	Account::_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts() << ";total:" << &getTotalAmount << ";deposits:";
	std::cout << &getNbDeposits << ";withdrawals:" << &getNbWithdrawals << std::endl;
}


void	Account::makeDeposit(int deposit)
{
	Account::_amount += deposit;
	Account::_totalNbDeposits += 1;
	Account::_totalAmount += deposit;
}
bool	Account::makeWithdrawal(int withdrawal)
{
	Account::_displayTimestamp();
	std::cout << "index:" << Account::_accountIndex << ";p_amount:" << Account::_amount << ";withdrawal:";
	if (withdrawal > Account::_amount)
	{
		std::cout << "refused\n";
		return (false);
	}
	else
	{
		Account::_amount -= withdrawal;
		Account::_nbWithdrawals += 1;
		Account::_totalAmount -= withdrawal;
		Account::_totalNbWithdrawals += 1;
		std::cout << withdrawal << ";amount:" << Account::_accountIndex << ";nb_withdrawals:" << Account::_nbWithdrawals << std::endl;
	}
	return (true);
}

int		Account::checkAmount(void) const
{
	return (Account::_amount);
}

void	Account::displayStatus(void) const
{
	Account::_displayTimestamp();
	std::cout << "index:" << Account::_accountIndex << ";amount:" << Account::_amount;
	std::cout << ";deposits:" << Account::_nbDeposits << ";withdrawals:" << Account::_nbWithdrawals << std::endl;
}

void	Account::_displayTimestamp(void)
{
	time_t t = time(0);
	tm *now = localtime(&t);
	
	std::cout << '[' << 1970 + now->tm_year << 1 + now->tm_mon << now->tm_mday;
	std::cout << '_' << 1 + now->tm_hour << 1 + now->tm_min << 1 + now->tm_sec << "] ";
}
