#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{

	int num1;
	int num2;
	int num3;
	int num4;
	int num5;
	char c1;
	char c2;
	char c3;
	char c4;
	char c5;

	cout << "Enter a number and a character" << endl;
	cin >> c1 >> num1;
	cout << "Enter a number and a character" << endl;
	cin >> c2 >> num2;
	cout << "Enter a number and a character" << endl;
	cin >> c3 >> num3;
	cout << "Enter a number and a character" << endl;
	cin >> c4 >> num4;
	cout << "Enter a number and a character" << endl;
	cin >> c5 >> num5;

	cout << "woiehwiofwlkjf" << endl;

	int sum = num1 + num2 + num3 + num4 + num5;
	double avg = sum / 5;

	cout << "input1 => " << c1 << " " << num1 << endl;
	cout << "input2 => " << c2 << " " << num2 << endl;
	cout << "input3 => " << c3 << " " << num3 << endl;
	cout << "input4 => " << c4 << " " << num4 << endl;
	cout << "input5 => " << c5 << " " << num5 << endl;
	cout << "sum&avg => " << sum << " " << avg << endl;

	system("pause");
	return 0;

}