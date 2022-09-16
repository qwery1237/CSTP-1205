#pragma once
#include <iostream>

using namespace std;
void Assignment2() {
	int arr1[101];
	int i = 0;
	while ( i < 101) {
		arr1[i] = i * 10;
		if (i == 0) {
			arr1[i] = 1;
		}
		cout << "arr1[" << i << "] = " << arr1[i] << endl;
		i++;
	}
}