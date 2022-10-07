#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include<string>
using namespace std;

int Assignment5() {
	int sum = 0;
	auto addNum = 1;
	do {
		string add;
		cout << "Enter a number" << endl;
		cin >> add;
		addNum = stoi(add);
		sum += addNum;
	} while (addNum != 0);
	return sum;
}
