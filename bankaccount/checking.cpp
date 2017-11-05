#include "stdafx.h"
#include <iostream>
#include <string>
#include "account.h"
#include "checking.h"
using namespace std;

Checking::Checking(string a, double i, double b, int f, int c) : Account(a, i, b)
{
	fee = f;
	checks = c;
}

Checking::Checking() : Account()
{
	fee = 5;
	checks = 15;
}

void Checking::Display()
{
	cout << " account: " << accountnumber << " balance: " << balance << endl;
	cout << " Fee: " << fee << "Checks: " << checks;
}

void Checking::GetData()
{
	cout << "accountnumber: " << endl;
	rand();
	cout << "balance: " << endl;
	balance = 0;
	cout << "fee: " << endl;
	fee = 5;
	cout << "checks: " << endl;
	checks = 15;
}