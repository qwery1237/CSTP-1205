#include <iostream>
#include "Point.h"
#include <stdlib.h>
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
	system("pause");

}

