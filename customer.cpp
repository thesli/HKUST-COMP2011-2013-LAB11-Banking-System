#include "my_includes.h"

customer::customer()
{
	a = NULL;
}

customer::customer(int i, char *s1, char* s2)
{
	id = i;
	strcpy(name, s1);
	strcpy(address, s2);
	a = NULL;
}

void customer::set_details(int i, char* s1, char* s2)
{
	id = i;
	strcpy(name, s1);
	strcpy(address, s2);
}

bool customer::create_account(int no)
{
	if(a == NULL){
		a = new account(no);
		return true;
	}
	else{
		cout << "This customer has an account already!" << endl << endl;
		return false;
	}
}

account* customer::get_account()
{
	return a;
}

void customer::print()
{
	cout << "Customer ID: " << id << endl;
	cout << "Name: " << name << endl;
	cout << "Address: " << address << endl;
	if(a != NULL)
		a->print();
	else
		cout << "No account." << endl;
	cout << endl;
}
customer::~customer()
{
	if(a != NULL)
		delete a;
}