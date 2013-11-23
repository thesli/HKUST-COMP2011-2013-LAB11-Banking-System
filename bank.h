class bank{
private:
	int next_id;
	int next_number;
	customer customers[1000];

public:
	// Constructors and destructor
	bank();
	~bank();
	
	// Accessors
	void print();
	
	// Mutators
	customer* create_customer(char* name, char* address);
	void create_account(customer* customer);
	bool deposit(customer* c, int amount);
	bool withdraw(customer* c, int amount);
	bool transfer(customer* c1, customer* c2, int amount);
};
