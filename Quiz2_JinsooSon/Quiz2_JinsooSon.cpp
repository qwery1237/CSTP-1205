// Quiz2_JinsooSon.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdlib.h>
#include <array>
using namespace std;

int main()
{
	int arr[10];
	int total = 0;
	for (int i = 0; i < 10; i++) {
		cin >> arr[i];
		total += arr[i];		
	}
	for (int i = 0; i < 10; i++) {
		cout << "arr[" << i << "] = " << arr[i] << endl;
	}
	double average = (double) total / 10;
	cout << "The total = " << total << endl << "The average = " << average << endl;
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
