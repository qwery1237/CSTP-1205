#pragma once
#include <stdlib.h>
using namespace std;
void Quiz1Double() {
	double f1;
	double f2;
	double f3;
	cin >> f1 >> f2 >> f3;
	double c1 = (f1 - 32) * 5 / 9;
	double c2 = (f2 - 32) * 5 / 9;
	double c3 = (f3 - 32) * 5 / 9;
	cout << c1 << endl << c2 << endl << c3 << endl;
	system("pause");
};