#include <iostream>
#include <iomanip>
#include <ctime>
#include "Account.hpp"

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(void)
{
}

Account::~Account(void)
{
}

Account::Account(int initial_deposit)
{
    this->_amount = initial_deposit;
    this->_nbDeposits = 0;
    this->_nbWithdrawals = 0;
    this->_accountIndex = Account::_nbAccounts;
    Account::_nbAccounts++;
    Account::_totalAmount += this->_amount;
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";";
    std::cout << "amount:" << this->_amount << ";";
    std::cout << "created" << std::endl;
}

void    Account::_displayTimestamp(void)
{
    time_t      ptr;
    struct tm   *time;

    std::time(&ptr);
    time = localtime(&ptr);
    std::cout << "[";
    std::cout << time->tm_year + 1900;
    std::cout << std::setw(2) << std::setfill('0') << time->tm_mon + 1;
    std::cout << std::setw(2) << std::setfill('0') << time->tm_mday << "_";
    std::cout << std::setw(2) << std::setfill('0') << time->tm_hour;
    std::cout << std::setw(2) << std::setfill('0') << time->tm_min;
    std::cout << std::setw(2) << std::setfill('0') << time->tm_sec;
    std::cout <<"] ";
}
