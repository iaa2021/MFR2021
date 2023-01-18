#pragma once

class Employee
{
public:
	Employee(const char *, const char *);
	~Employee();
	const char* getFirstName() const;
	const char* getLastName() const;
	static int getCount();
	void getVersion() const;
private:
	char *firstName;
	char* lastName;
	static int count;
};

