#include "my_includes.h"

int main(int argc, char const *argv[])
{
	
	// Create a bank object
	bank b;
	b.print();
	
	//Create two customer objects, c1 and c2.
	/* ================== YOUR CODE HERE ================== */
		
	customer* c1 = b.create_customer("john","somewhere");
	customer* c2 = b.create_customer("mary","otherwhere");

	// Create accounts for c1 and c2. 
	// The accounts must be created through the bank object.
	/* ================== YOUR CODE HERE ================== */	
	
	b.create_account(c1);
	b.create_account(c2);

	// Print the bank again to see the newly created customers
	b.print();
	
	

	//Try transfering $1000 from customer c1 to customer c2.
	/* ================== YOUR CODE HERE ================== */
	b.transfer(c1,c2,1000);

	//Deposit $1000 to customer c1. 
	/* ================== YOUR CODE HERE ================== */
	b.deposit(c1,1000);

	//Try transfering $500 from customer c1 to customer c2 again.
	/* ================== YOUR CODE HERE ================== */
	b.transfer(c1,c2,500);

	//Withdraw $100 from customer c1.
	/* ================== YOUR CODE HERE ================== */
	b.withdraw(c1,100);
	
	// Print the bank again to see the results of the transactions
	b.print();
	
	return 0;
}