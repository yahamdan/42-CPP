#include "Account.hpp"
#include <iostream>
#include <ctime>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account( int initial_deposit )
{
    _displayTimestamp();
    _accountIndex = _nbAccounts;
    _amount = initial_deposit;
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created\n";
    _totalAmount += initial_deposit;
    _nbAccounts++;
}

int Account::getNbAccounts()
{
    return (_nbAccounts);
}

int Account::getTotalAmount()
{
    return (_totalAmount);
}

int Account::getNbDeposits()
{
    return (_totalNbDeposits);
}

int Account::getNbWithdrawals()
{
    return (_totalNbWithdrawals);
}

void Account::displayAccountsInfos()
{
    _displayTimestamp();
    std::cout << "accounts:" << getNbAccounts() << ";total:" ;
    std::cout << getTotalAmount() << ";deposits:" << getNbDeposits();
    std::cout << ";withdrawals:" << getNbWithdrawals() << std::endl;
}

void    Account::makeDeposit( int Deposit )
{
    _displayTimestamp();
    _totalNbDeposits++;
    _nbDeposits++;
    _totalAmount += Deposit;
    std::cout << "index:" << _accountIndex;
    std::cout << ";p_amount:" << _amount;
    std::cout << ";deposit:" << Deposit;
    _amount += Deposit;
    std::cout << ";amount:" << _amount;
    std::cout << ";nb_deposits:" << _nbDeposits;
    std::cout << std::endl;
}

bool Account::makeWithdrawal( int withdrawal )
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex;
    std::cout << ";p_amount:" << checkAmount();
    
    if (withdrawal > checkAmount())
    {
        std::cout << ";withdrawal:refused" << std::endl;
        return (false);
    }
    else
    {
        _totalAmount -= withdrawal;
        _amount -= withdrawal;
        _nbWithdrawals++;
        _totalNbWithdrawals++;
        std::cout << ";withdrawal:" << withdrawal;
        std::cout << ";amount:" << checkAmount();
        std::cout << ";nb_withdrawals:" << _nbWithdrawals;
        std::cout << std::endl;
        return (true);
    }
}

int Account::checkAmount( void ) const
{
    return ( _amount );
}

void Account::displayStatus( void ) const
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex;
    std::cout << ";amount:" << _amount;
    std::cout << ";deposits:" << _nbDeposits;
    std::cout << ";withdrawals:" << _nbWithdrawals;
    std::cout << std::endl;
}

void Account::_displayTimestamp()
{
    std::time_t crTime = std::time(NULL);
    std::tm* timeInfo = std::localtime(&crTime);
    
    char buff[80];
    std::strftime(buff, 80, "[%Y%m%d_%H%M%S] ", timeInfo);
    std::cout << buff;
}

Account::~Account()
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed\n";
}
