#pragma once
#include <iostream>

using namespace std;

bool IsEven(int num)
{
	int remainder = num % 2;
	if (remainder == 0)
	{
		return true;
	}

	return false;
}

void BasicConditionals()
{
	int num1 = 23;
	int num2 = 36;

	bool isNum1Even = IsEven(num1);
	bool isNum2Even = IsEven(num2);

	cout << isNum1Even << endl << isNum2Even << endl;
}