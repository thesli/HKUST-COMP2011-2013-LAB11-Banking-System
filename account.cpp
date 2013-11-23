#include "my_includes.h"

account::account(int no)
{
	number = no;
	balance = 0;
}

void account::print()
{
	cout << "Account number: " << number << endl;
	cout << "Balance: $" << balance << endl;
}

bool account::deposit(int amount)
{
	balance += amount;
	return true;
}

bool account::withdraw(int amount)
{
	if(balance >= amount)
	{
		balance -= amount;
		return true;
	}
	else
	{
		cout << "The balance of account number " << number << " is insufficient!" << endl << endl;
		return false;
	}
}

int account::get_number()
{
	return number;
}

int account::get_balance()
{
	return balance;
}

account::~account(){
	if(balance != 0)
		cout << "The bank earns $" << balance << " from the remaining balance of account number " << number << "." << endl << endl;
}