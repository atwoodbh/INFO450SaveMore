#pragma once
#include "account.h"
class Checking : public Account
{
private:
	int fee;
	int checks;
public:
	Checking();
	Checking(string a, double i, double b, int f, int c);
	void GetData();
	void Display();
};