#pragma once
#include <stdlib.h>
using namespace std;
void Quiz1() {
	int f1;
	int f2;
	int f3;
	cin >> f1 >> f2 >> f3;
	int c1 = (f1 - 32) * 5 / 9;
	int c2 = (f2 - 32) * 5 / 9;
	int c3 = (f3 - 32) * 5 / 9;
	cout << c1 << endl << c2 << endl << c3 << endl;
	system("pause");
};