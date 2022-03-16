#include "Account.hpp"
#include <iostream>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account( void ){}

Account::Account(int initial_deposit)
 {
	_accountIndex = _nbAccounts;
	_nbAccounts++;
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created" << std::endl;
}

Account::~Account(){
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed" << std::endl;
}

int Account::getNbAccounts( void ){return _nbAccounts;}
int Account::getTotalAmount( void ){return _totalAmount;}
int Account::getNbDeposits( void ){return _totalNbDeposits;}
int Account::getNbWithdrawals( void){return _totalNbWithdrawals;}
void Account::displayAccountsInfos( void ){}

void	Account::makeDeposit( int deposit ){_totalNbDeposits++;}
bool	Account::makeWithdrawal( int withdraw){return true;}
int		Account::checkAmount( void ) const{return 0;}
void	Account::displayStatus( void ) const{}