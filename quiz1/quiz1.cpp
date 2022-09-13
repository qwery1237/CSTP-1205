// quiz1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdlib.h>
using namespace std;
	
int main()
{
	int f1;
	int f2;
	int f3;
	cin >> f1 >> f2 >> f3;
	int c1 = (f1 - 32) * 5 / 9;
	int c2 = (f2 - 32) * 5 / 9;
	int c3 = (f3 - 32) * 5 / 9;
	cout << c1 << endl << c2 << endl << c3 << endl;
	system("pause");
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
