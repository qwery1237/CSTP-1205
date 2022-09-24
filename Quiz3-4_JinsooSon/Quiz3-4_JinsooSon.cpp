#include <iostream>
#include <stdlib.h>
#include "Quiz3-4.h"
using namespace std;
int main()
{
    // Q4-B
    bool testArr[] = { 1,0,1,0,0 };
    Q3Print(testArr, 5);
    Q4ChangeAll(testArr, 5, true);
    Q3Print(testArr, 5);
    system("pause");
}

