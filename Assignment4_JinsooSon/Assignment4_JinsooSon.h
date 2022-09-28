#include <iostream>
#include <string>
using namespace std;
void Assignment4A(char s[150]) {
	char c;
	cout << "uppercase or lowercase? (u / l) " << endl;
	cin >> c;
	if (c == 'l') {
		for (int i = 0; i < strlen(s); i++) {
			s[i] = tolower(s[i]);
		}
	}
	else {
		for (int i = 0; i < strlen(s); i++) {
			s[i] = toupper(s[i]);
		}
	}
	cout << "The converted string is " << s << endl;
}

void Assignment4B(char* s) {
	char c;
	int sLen = strlen(s);
	int i = 0;
	cout << "uppercase or lowercase? (u / l) " << endl;
	cin >> c;
	if (c == 'l') {
		while (strlen(s)) {
			*s = tolower(*s);
			s++;
		}
	}
	else {
		while (strlen(s)) {
			*s = toupper(*s);
			s++;
		}
	}
	cout << "The converted string is " << s-sLen << endl;
}