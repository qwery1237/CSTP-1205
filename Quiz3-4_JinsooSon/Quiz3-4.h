#include <iostream>
using namespace std;

void Q3Print(bool* pi, int n) {
	int i = 0;
	while (i < n)
	{
		if (*pi) {
			cout << "arr[" << i++ << "] = true" << endl;
		}
		else {
			cout << "arr[" << i++ << "] = false" << endl;
		} 
		pi++;
	}
}

void Q4ChangeAll(bool* pi, int n, bool val) {
	int i = 0;
	if (val) {
		while (i++ < n) {
			*pi = true;
			pi++;
		}
	}
	else {
		while (i++ < n) {
			*pi = false;
			pi++;
		}
	}
}
