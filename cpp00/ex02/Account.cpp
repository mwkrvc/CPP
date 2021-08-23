#include "Account.hpp"
#include <iostream>
#include <chrono>
#include <iomanip>
#include <ctime>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

void Account::_displayTimestamp() {
	std::time_t t = std::time(nullptr);
	std::tm tm = *std::localtime(&t);
	std::cout << std::put_time(&tm, "[%Y%m%d_%H%M%S] ");
}

Account::Account(int initial_deposit) : _accountIndex(0), _amount(initial_deposit), _nbDeposits(0), _nbWithdrawals(0) {
	static int index = 0;
	_accountIndex = index;
	_displayTimestamp();
	_nbAccounts = index + 1;
	_totalAmount += _amount;
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created" << std::endl;
	index++;
}

Account::~Account() {
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed" << std::endl;
}

void Account::displayAccountsInfos() {
	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts << ";total:" << _totalAmount
		<< ";deposits:" << _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals << std::endl;
}
void Account::displayStatus() const {
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount
		<< ";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals << std::endl;
}

void Account::makeDeposit(int deposit) {
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";p_amount:" << _amount;
	_amount += deposit;
	_nbDeposits++;
	_totalNbDeposits++;
	_totalAmount += deposit;
	std::cout << ";deposit:" << deposit << ";amount:" << _amount << ";nb_deposits:" << _nbDeposits << std::endl;
}

bool Account::makeWithdrawal(int withdrawal) {
	_displayTimestamp();
	if (_amount - withdrawal < 0)
	{
		std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";withdrawal:refused" << std::endl;
		return (false);
	}
	else
	{
		std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";withdrawal:" << withdrawal;
		_amount -= withdrawal;
		_nbWithdrawals++;
		_totalNbWithdrawals++;
		_totalAmount -= withdrawal;
		std::cout << ";amount:" << _amount << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
		return (true);
	}
}
