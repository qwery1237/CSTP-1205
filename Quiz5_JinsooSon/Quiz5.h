#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include<string>
using namespace std;

void Quiz5() {
	char usrInfo[250];
	char name[50];
	char address[100];
	char email[50];
	char occupation[30];
	char str[] = " - ";
	cout << "Name: ";
	cin.getline(name, 50);
	cout << "Address: ";
	cin.getline(address, 100);
	cout << "Email: ";
	cin.getline(email, 50);
	cout << "Occupation: ";
	cin.getline(occupation, 30);
	strncpy(usrInfo, name, 250 - strlen(name));
	strncat(usrInfo, str, strlen(str));
	strncat(usrInfo, address, strlen(address));
	strncat(usrInfo, str, strlen(str));
	strncat(usrInfo, email, strlen(email));
	strncat(usrInfo, str, strlen(str));
	strncat(usrInfo, occupation, strlen(occupation));
	cout << usrInfo << endl;
}