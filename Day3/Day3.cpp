#include <iostream>
#include <stdlib.h>
#include "SwitchCase.h"
#include "BasicPointers.h"
using namespace std;

int main()
{

    //SwitchCase1();
    //SwitchCase2();
    //BasicPointers();
    
    //int x = 10;
    //int y = 20;
    //SwapCopies(x, y);
    //cout << x << y << endl;
    //Swap(&x, &y);
    //cout << x << y << endl;

    int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
    bool test = (&arr[1] + 1 == &arr[2]); // 주소에 1 더하면 배열 내 다음 요소로 감.
    cout << &arr[1] << endl << &arr[2] << endl << test << endl;
    InitializeArray(&arr[0], 10);
    for (int el : arr) {
        cout << el << endl;
    }
    system("pause");
}
