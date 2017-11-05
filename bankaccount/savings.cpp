#include "stdafx.h"
#include <iostream>
#include <string>
#include "account.h"
#include "savings.h"
using namespace std;


Savings::Savings(string a, double i, double b, int sf, int v) : Account(a, i, b)
{
	variableinterest = v;
	fee = sf;
}

Savings::Savings() : Account()
{
	variableinterest = 0;
	fee = 2;
}

void Savings::Display()
{
	cout << " account: " << accountnumber << " interest rate: " << interestrate << " balance: " << balance << endl;
}

void Savings::GetData()
{
	cout << "accountnumber: " << endl;
	rand();
	cout << "interest rate: " << endl;
	if (balance >= 10000)
	{
		interestrate = .02;
	}
	else
	{
		interestrate = .01;
	}
	cout << "balance: " << endl;
	balance = 0;
}