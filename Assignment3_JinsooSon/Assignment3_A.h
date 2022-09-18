#include<iostream>
using namespace std;
void PrintArrayElements(int* firstEl, int arrSize) {
	int i = 0;
	while ( i < arrSize )
	{
		cout << "arr[" << i++ << "] = " << *firstEl  << endl;
		firstEl++;
	}
}
double Average(int* firstEl, int arrSize) {
	int i = 0;
	double sum = 0;
	while (i++ < arrSize) {
		sum += *firstEl;
		firstEl++;
	}
	return sum / arrSize;
}