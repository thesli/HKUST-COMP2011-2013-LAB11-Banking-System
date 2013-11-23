#include "my_includes.h"

bank::bank()
{
	next_id = 0;
	next_number = 0;
}

customer* bank::create_customer(char* name, char* address)
{
	customers[next_id].set_details(next_id, name, address);
	next_id++;
	cout << "Customer created successfully!" << endl << endl;
	return &customers[next_id-1];
}

void bank::create_account(customer* customer)
{
	if(customer->create_account(next_number))
	{
		next_number++;
		cout << "Account created successfully!" << endl << endl;
	}
}

bool bank::deposit(customer* c, int amount)
{
	//Check whether the customer c has an account. 
	// If not, report a failure message and return false.
	/* ================== YOUR CODE HERE ================== */
	if(c->get_account()!=NULL){
		c->get_account()->deposit(amount);
		return true;
	}else{
		return false;
	}	
	//Deposit amount of money to customer c's account. 
	// If successful, return true. Otherwise return false.
	/* ================== YOUR CODE HERE ================== */
}

bool bank::withdraw(customer* c, int amount)
{
	//Check whether the customer c has an account. 
	// If not, report a failure message and return false.
	/* ================== YOUR CODE HERE ================== */
	if(c->get_account()!=NULL){
		c->get_account()->withdraw(amount);
		return true;
	}else{
		// cout << "Balance not enough" << endl;
		return false;
	}	
	// Withdraw amount of money from customer c's account. 
	// If successful, return true. Otherwise return false.
	/* ================== YOUR CODE HERE ================== */
}

bool bank::transfer(customer* c1, customer* c2, int amount)
{
	//Check whether the customer c1 and c2 have accounts. 
	// If not, report a failure message and return false.
	/* ================== YOUR CODE HERE ================== */
	if(c1->get_account()!=NULL && c2->get_account()!=NULL ){
		if(c1->get_account()->get_balance()>=amount){
			c1->get_account()->withdraw(amount);
			c2->get_account()->deposit(amount);
			return true;
		}else{
			cout << "Balance not enough" << endl;
			return false;
		}				
	}else{
		cout << "customer(s) do(es) not own an account" << endl;
		return false;
	}


	// Withdraw amount of money from customer c1's account. 
	// If unsuccessful, report a failure message and return false.
	// If successful, deposit the same amount of money to customer c2's account.
	/* ================== YOUR CODE HERE ================== */
}

void bank::print()
{
	if(next_id == 0)
		cout << "The bank has no customers." << endl << endl;
	else
	{
		cout << "The bank has the following customers:" << endl << endl;
		for(int i=0; i<next_id; i++)
		{
			cout << "--- Customer " << i+1 << " ---" << endl;
			customers[i].print();
		}
	}
}

bank::~bank()
{
}	