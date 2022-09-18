#include <iostream>
#include <stdlib.h>
#include "Assignment3_A.h"
using namespace std;
int main()
{
    int testArr[] = { 1, 3, 5, 7, 10 };
    PrintArrayElements(&testArr[0], 5);
    double ave = Average(&testArr[0], 5);
    cout << "Average is " << ave << endl;
    system("pause");
}
