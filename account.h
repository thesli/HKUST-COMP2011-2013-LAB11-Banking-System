class account
{
private:
	int number;
	int balance;

public:
	
	// Constructors and destructor
	account(int no);
	~account();
	
	// Accessors
	int get_number();
	int get_balance();
	void print();
	
	// Mutators
	bool deposit(int amount);
	bool withdraw(int amount);
};
