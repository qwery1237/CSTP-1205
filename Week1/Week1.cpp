// Week1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std; // 글로벌 네임스페이스

 int main()
{
    //std::cout << "Hello World!\n";
    cout << "Hello World\n";        // 프린트 아웃

    // boolean
    bool b1 = true;
    bool b2(true);
    bool b3;

    // character
    
    char c = 'a';
    cout << "c=" << c << endl;      // 라인스페이싱
    cout << "size of c is: " << sizeof(c) << endl;
    
    char a = 97;     //아스키코드
    cout << "a is => " << a << endl;

    // integer
    int x = 12;
    int y = 0xC;  //12진법

    cout << "the value in x = " << x << " and y = " << y << endl;

    //float
    double d = 3.14;
    cout << "d is " << d << endl;

    // Type Modifiers
    // default = signed(바이너리 첫자리가 양수 음수 판별에 사용됨)
    // unsigned = 부호없이 양의 바이너리로 사용함..(즉 표기할 수 있는 정수의 크기가 2배가 된다.)
    unsigned int ua = 0;

    // Operators
    // += , /= , ++ , --,
    int var1 = 5;
    int var2 = 7;

    int res = var1 + var2;
    var2 += 10;     // var2 = var2 + 10;

    // standard input cin >> (입력받기)
    int var3 = 0;
    cout << "please enter an intege: ";
    cin >> var3;
    cout << "you entered: " << var3 << endl;

    int i1;
    int i2 = 0;

    cin >> i1 >> i2;
    cout << "i1 = " << i1 << " i2 = " << i2 << endl;


    return 0; //default
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
