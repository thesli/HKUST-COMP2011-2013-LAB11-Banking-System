class customer{
private:
	int id;
	char name[20], address[100];
	account* a;

public:
	
	// Constructors and destructor
	customer();
	customer(int i, char* s1, char* s2);
	~customer();
	
	// Accessors
	account* get_account();
	void print();
	
	// Mutators
	void set_details(int i, char* s1, char* s2);
	bool create_account(int no);	
};
