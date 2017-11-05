// bankaccount.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "account.h""
#include "savings.h"
#include "checking.h"
#include "cd.h"
using namespace std;


int main()
{
	char answer;
	Account *aAcct = NULL;
	cout << "Welcome to the Save-More Online Portal" << endl;
	cout << "What kind of account would you like to create today?" << endl;
	cout << "Savings (S), Checking (C) or a Certificate of Deposit (CD)" << endl;
	cout << "Please Enter S, C or CD" << endl;
	cin >> answer;
	cin.ignore();
	cin.clear();
	if (answer == 's' || answer == 'S')
	{
		aAcct = new Savings();
		aAcct->GetData();
	}
	else if (answer == 'c' || answer == 'C')
	{
		aAcct = new Checking();
		aAcct->GetData();
	}
	else if (answer == 'cd' || answer == 'CD')
	{
		aAcct = new Cd();
		aAcct->GetData();
	}
	aAcct->Display();

	Savings *aSavings = NULL;
	Checking *aChecking = NULL;
	Cd *aCd = NULL;
	

    return 0;
}