/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrmarqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 17:08:55 by adrmarqu          #+#    #+#             */
/*   Updated: 2024/10/20 15:00:47 by adrmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <iomanip>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
	this->_nbWithdrawals = 0;
	this->_nbDeposits = 0;
	this->_accountIndex = this->getNbAccounts();
	this->_amount = initial_deposit;
	Account::_totalAmount += initial_deposit;
	Account::_displayTimestamp();
	
	std::cout << "index: " << Account::_nbAccounts++ << "; ";
	std::cout << "amount: " << this->_amount << "; ";
	std::cout << "created" << std::endl;
	
	return ;
}

Account::~Account(void)
{
	if (this->_accountIndex == 0)
		std::cout << std::endl;
	
	Account::_displayTimestamp();
	Account::_nbAccounts--;
	
	std::cout << "index: " << this->_accountIndex << "; ";
	std::cout << "amount: " << this->_amount << "; ";
	std::cout << "closed" << std::endl;
	
	return ;
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

int	Account::checkAmount(void) const
{
	return (Account::_amount);
}

void	Account::_displayTimestamp(void)
{
	struct tm	*timeinfo;
	time_t		t;

	t = time(NULL);
	timeinfo = localtime(&t);
	std::cout << "[" << 1900 + timeinfo->tm_year;
	std::cout << std::setfill('0') << std::setw(2) << timeinfo->tm_mon + 1;
	std::cout << std::setw(2) << timeinfo->tm_mday << "_";
	std::cout << std::setw(2) << timeinfo->tm_hour;
	std::cout << std::setw(2) << timeinfo->tm_min;
	std::cout << std::setw(2) << timeinfo->tm_sec << "] ";

	return ;
}

void	Account::displayAccountsInfos(void)
{
	std::cout << std::endl << "accounts: " << _nbAccounts << "; ";
	std::cout << "total: " << _totalAmount << "; ";
	std::cout << "deposits: " << _totalNbDeposits << "; ";
	std::cout << "withdrawals: " << _totalNbWithdrawals;
	std::cout << std::endl << std::endl;
}

void	Account::displayStatus(void) const
{
	std::cout << "index: " << _accountIndex << "; ";
	std::cout << "amount: " << _amount << "; ";
	std::cout << "deposits: " << _nbDeposits << "; ";
	std::cout << "withdrawals: " << _nbWithdrawals << std::endl;
}

void	Account::makeDeposit(int deposit)
{
	if (this->_accountIndex == 0)
		std::cout << std::endl;
	
	Account::_displayTimestamp();
	std::cout << "index: " << this->_accountIndex << "; ";
	std::cout << "p_amount: " << this->_amount << "; ";
	std::cout << "deposit: " << deposit << "; ";
	
	this->_amount += deposit;
	this->_nbDeposits++;
	Account::_totalAmount += deposit;
	Account::_totalNbDeposits++;
	
	std::cout << "amount: " << this->_amount << "; ";
	std::cout << "nb_deposits: " << this->_nbDeposits;
	std::cout << std::endl;
	
	return ;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	if (this->_accountIndex == 0)
		std::cout << std::endl;
	
	this->_displayTimestamp();
	std::cout << "index: " << this->_accountIndex << "; ";
	std::cout << "p_amount: " << this->_amount << "; ";
	if (withdrawal > this->_amount)
	{	
		std::cout << "withdrawal: refused" << std::endl;
		return (false);
	}
	std::cout << "withdrawal: " << withdrawal << "; ";
	
	this->_amount -= withdrawal;
	this->_nbWithdrawals++;
	Account::_totalAmount -= withdrawal;
	Account::_totalNbWithdrawals++;
	
	std::cout << "amount: " << this->_amount << "; ";
	std::cout << "nb_withdrawals: " << this->_nbWithdrawals << std::endl;
	
	return (true);
}
