#include <iostream>
#include "Point.h"
#include <stdlib.h>
#include "Fraction.h"
using namespace std;
int main()
{
	Point pointArray[10];
	int x = 1;
	int y = 0;
	for (int i = 0; i < 10; i++) {
		pointArray[i].Set(x, y);
		x *= 2;
		y++;
	}
	for (int i = 0; i < 10; i++) {
		cout << "pointArray[" << i << "] : x = " << pointArray[i].GetX() << " y = " << pointArray[i].GetY() << endl;
	}

	Fraction n0;
	Fraction n1(5);
	Fraction n2(3, 5);
	Fraction n3(n2);
	cout << "n0.num = " << n0.GetNum() << endl;
	cout << "n0.den = " << n0.GetDen() << endl;
	cout << "n1.num = " << n1.GetNum() << endl;
	cout << "n1.den = " << n1.GetDen() << endl;
	cout << "n2.num = " << n2.GetNum() << endl;
	cout << "n2.den = " << n2.GetDen() << endl;
	cout << "n3.num = " << n3.GetNum() << endl;
	cout << "n3.den = " << n3.GetDen() << endl;
	
	 
	system("pause");

}

