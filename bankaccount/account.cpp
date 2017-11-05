#include "stdafx.h"
#include <string>
#include <iostream>
#include "account.h"
using namespace std;

int accountnumber;
int deposit;
int balance;

Account::Account()
{
	accountnumber = "";
	interestrate = 0;
	balance = 0;
}
Account::Account(string a, double i, double b)
{
	accountnumber = a;
	interestrate = i;
	balance = b;
}


//test
void display()
{
	cout << "Account Number: " << accountnumber << endl;
}

int functions()
{
	if (balance < 0)
	{
		return false;
	}


	int balance = balance + deposit;
}