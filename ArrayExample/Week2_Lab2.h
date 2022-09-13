#pragma once
#include <iostream>

using namespace std;
void Lab2() {
	int arr1[101];
	for (int i = 0; i < 101; i++) {
		arr1[i] = i * 10;
		if (i == 0) {
			arr1[i] = 1;
		}
		cout << "arr1[" << i << "] = " << arr1[i] << endl;
	}
}