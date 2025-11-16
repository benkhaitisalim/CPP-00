/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsalim <bsalim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 12:24:39 by bsalim            #+#    #+#             */
/*   Updated: 2025/11/16 21:08:27 by bsalim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

int	Account::getNbAccounts( void )
{
    return (_nbAccounts);
}
int	Account::getTotalAmount( void )
{
    return (_totalAmount);
}
int	Account::getNbDeposits( void )
{
    return  _totalNbDeposits;
}
int	Account::getNbWithdrawals( void )
{
    return  (_totalNbWithdrawals);
}
void Account::displayAccountsInfos( void )
{
    Account::_displayTimestamp();
}

Account::Account( int initial_deposit ) 
    : _accountIndex(Account::_nbAccounts),
    _amount(initial_deposit > 0 ? initial_deposit:0),
    _nbDeposits(0),_nbWithdrawals(0)
{
    Account::_nbAccounts++;
    Account::_totalAmount += _amount;
    Account::displayStatus();
}

void	Account::_displayTimestamp( void )
{
    // std::cout << "this is the time " <<  std::put_time <<  std::endl;
}

Account::~Account(void)
{
    Account::_nbAccounts--;
    Account::_totalAmount -= _amount;
    Account::displayStatus();
}

void	Account::makeDeposit( int deposit )
{
    std::cout << "This Ammount befour Deposit" << std::endl;
    _amount += deposit;
    _nbDeposits++;
    Account::_totalAmount += deposit;
    Account::_totalNbDeposits++;
    std::cout << "This Ammount after Deposit" << std::endl;
}

// bool	Account::makeWithdrawal( int withdrawal )
// {
// }
// int		Account::checkAmount( void )const
// {
// }


void	Account::displayStatus( void ) const
{
    std::cout << std::setw(20) << "amount             :" << _amount << std::endl;
    std::cout << std::setw(20) << "totalAmount        :" << _totalAmount << std::endl;
    std::cout << std::setw(20) << "totalNbDeposits    :" << _totalNbDeposits << std::endl;
    std::cout << std::setw(20) << "totalNbWithdrawals :" << _totalNbWithdrawals << std::endl;
}
