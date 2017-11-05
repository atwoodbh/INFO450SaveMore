#include "stdafx.h"
#include <iostream>
#include <string>
#include "account.h"
#include "cd.h"
using namespace std;

Cd::Cd(string a, double i, double b, int f, int cdf, int t) : Account(a, i, b)
{
	fee = cdf;
	cdterm = t;
}

Cd::Cd() : Account()
{
	fee = .10;
}

void Cd::Display()
{
	cout << " account: " << accountnumber << " balance: " << balance << endl;
	cout << " Fee: " << fee << endl;
}

void Cd::GetData()
{
	cout << "accountnumber: " << endl;
	rand();
	cout << "balance: " << endl;
	balance = 0;
	cout << "fee: " << endl;
	fee = .10;
	cout << "interest: " << endl;
	if (cdterm >= 5)
	{
		interestrate = 10;
	}
	else
	{
		interestrate = 5;
	}
}