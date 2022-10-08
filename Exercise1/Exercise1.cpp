#include <iostream>
#include <stdlib.h>
using namespace std;
#include <string>


int main()
{
    string dogName;
    string dogBreed;
    string dogAge;
    cout << "Dog Name?" << endl;
    getline(cin, dogName);
    cout << "Dog Breed?" << endl;
    getline(cin, dogBreed);
    cout << "Dog Age?" << endl;
    getline(cin, dogAge);
    string dogInfo = dogName + " " + dogBreed + " " + dogAge;
    cout << dogInfo << endl;
    system("pause");
}

