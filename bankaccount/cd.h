#pragma once
#include "account.h"
class Cd : public Account
{
private:
	int fee;
	int cdterm;
public:
	Cd();
	Cd(string a, double i, double b, int cdf, int c, int t);
	void GetData();
	void Display();
};