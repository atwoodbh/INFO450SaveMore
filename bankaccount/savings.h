#pragma once
#include "account.h"
class Savings : public Account
{
private:
	int variableinterest;
	int fee;
public:
	Savings();
	Savings(string a, double i, double b, int sf, int v);
	void GetData();
	void Display();
};