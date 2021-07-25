/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besellem <besellem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 00:47:38 by besellem          #+#    #+#             */
/*   Updated: 2021/07/25 10:58:32 by besellem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>

int		Account::_nbAccounts = 0;
int		Account::_totalAmount = 0;
int		Account::_totalNbDeposits = 0;
int		Account::_totalNbWithdrawals = 0;


Account::Account(int initial_deposit) :
		_accountIndex(Account::_nbAccounts),
		_amount(initial_deposit),
		_nbDeposits(0),
		_nbWithdrawals(0) {

	Account::_nbAccounts++;
	Account::_totalAmount += initial_deposit;

	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";" \
	          << "amount:" << this->_amount << ";" \
	          << "created" << std::endl;
}

Account::~Account(void) {
	
	Account::_nbAccounts--;
	
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";" \
	          << "amount:" << this->_amount << ";" \
	          << "closed" << std::endl;
}


int		Account::getNbAccounts(void) {
	return Account::_nbAccounts;
}

int		Account::getTotalAmount(void) {
	return Account::_totalAmount;
}

int		Account::getNbDeposits(void) {
	return Account::_totalNbDeposits;
}

int		Account::getNbWithdrawals(void) {
	return Account::_totalNbWithdrawals;
}

void	Account::displayAccountsInfos(void) {
	
	Account::_displayTimestamp();
	std::cout << "accounts:" << Account::_nbAccounts << ";" \
	          << "total:" << Account::_totalAmount << ";" \
	          << "deposits:" << Account::_totalNbDeposits << ";" \
	          << "withdrawals:" << Account::_totalNbWithdrawals << std::endl;
}

void	Account::makeDeposit(int deposit) {
	
	Account::_totalAmount += deposit;
	Account::_totalNbDeposits++;
	this->_nbDeposits++;
	
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";" \
	          << "p_amount:" << this->_amount << ";" \
	          << "deposit:" << deposit << ";" \
	          << "amount:" << this->_amount + deposit << ";" \
	          << "nb_deposits:" << this->_nbDeposits << std::endl;
	
	this->_amount += deposit;
}

bool	Account::makeWithdrawal(int withdrawal) {

	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";" \
	          << "p_amount:" << this->_amount << ";";

	if (this->checkAmount() < withdrawal) {
		std::cout << "withdrawal:refused" << std::endl;
		return false;
	}
	
	Account::_totalAmount -= withdrawal;
	Account::_totalNbWithdrawals++;
	this->_nbWithdrawals++;
	this->_amount -= withdrawal;

	std::cout << "withdrawal:" << withdrawal << ";" \
	          << "amount:" << this->_amount << ";" \
	          << "nb_withdrawals:" << this->_nbWithdrawals << std::endl;
	
	return true;
}

int		Account::checkAmount(void) const {
	return this->_amount;
}

void	Account::displayStatus(void) const {

	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";" \
	          << "amount:" << this->_amount << ";" \
	          << "deposits:" << this->_nbDeposits << ";" \
	          << "withdrawals:" << this->_nbWithdrawals << std::endl;
}

void	Account::_displayTimestamp(void) {

		return ;
	
	const time_t	now = std::time(nullptr);
	const tm		*ltm = std::localtime(&now);

	std::cout << "[";
	std::cout << 1900 + ltm->tm_year;

	if ((1 + ltm->tm_mon) < 10) { std::cout << "0"; };
	std::cout << 1 + ltm->tm_mon;

	if (ltm->tm_mday < 10) { std::cout << "0"; };
	std::cout << ltm->tm_mday;

	std::cout << "_";

	if ((5 + ltm->tm_hour) < 10) { std::cout << "0"; };
	std::cout << ltm->tm_hour;

	if ((30 + ltm->tm_min) < 10) { std::cout << "0"; };
	std::cout << ltm->tm_min;

	if (ltm->tm_sec < 10) { std::cout << "0"; };
	std::cout << ltm->tm_sec;
	
	std::cout << "] ";
}
