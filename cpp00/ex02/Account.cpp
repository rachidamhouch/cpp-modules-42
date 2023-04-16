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
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";";
    std::cout << "amount:" << this->_amount << ";";
    std::cout << "closed" << std::endl;
}

Account::Account(int initial_deposit) : _amount(initial_deposit), 
	_nbDeposits(0), _nbWithdrawals(0)
{
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

int Account::getNbAccounts(void)
{
    return (Account::_nbAccounts);
}

int Account::getTotalAmount(void)
{
    return (Account::_totalAmount);
}

int Account::getNbDeposits(void)
{
    return (Account::_totalNbDeposits);
}

int Account::getNbWithdrawals(void)
{
    return (Account::_totalNbWithdrawals);
}

void Account::displayAccountsInfos(void)
{
    Account::_displayTimestamp();
    std::cout <<  "accounts:"<<Account::getNbAccounts()<< ";total:"<<Account::getTotalAmount()<<";deposits:"\
    << Account::getNbDeposits()<<";withdrawals:"<<Account::getNbWithdrawals()<<std::endl;
}

void Account::displayStatus(void) const
{
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex;
    std::cout << ";amount:" << this->_amount;
    std::cout << ";deposits:" << this->_nbDeposits;
    std::cout << ";withdrawals:" << this->_nbWithdrawals << std::endl;
}

void Account::makeDeposit( int deposit )
{
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex;
    std::cout << ";p_amount:" << this->_amount;
    std::cout << ";deposit:" << deposit;
    this->_amount += deposit;
    this->_nbDeposits++;
    Account::_totalNbDeposits++;
    std::cout << ";amount:" << this->_amount;
    std::cout << ";nb_deposits:" << this->_nbDeposits << std::endl;
}

bool Account::makeWithdrawal( int withdrawal )
{
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex;
    std::cout << ";p_amount:" << this->_amount;
    std::cout << ";withdrawal:";
    if (withdrawal > this->_amount)
    {
        std::cout<< "refused" << std::endl;
        return (0);
    }
    std::cout<< withdrawal;
    this->_amount -= withdrawal;
    this->_nbWithdrawals++;
    Account::_totalNbWithdrawals++;
    std::cout << ";amount:" << this->_amount;
    std::cout << ";nb_withdrawals:" << this->_nbDeposits << std::endl;
    return (1);
}
