#pragma once
#include <string>
using namespace std;

class Account
{
protected:
	string accountnumber;
	double interestrate;
	double balance;
public:
	Account();
	Account(string a, double i, double b);
	virtual void GetData() = 0;
	virtual void Display();
};