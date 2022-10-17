#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void Assignment7() {
	int lineNum;
	string line;
	ofstream fout1("C:\\Users\\000455846\\C++\\CSTP-1205\\Assignment7_JinsooSon\\output.txt");
	cout << "How many lines do you want to write?";
	cin >> lineNum;
	while (lineNum--) {
		cout << "Enter a line" << endl;
		getline(cin, line);
		if (line.empty()) {
			lineNum++;
			continue;
		}
		fout1 << line << endl;
	}
	fout1.close();
	ifstream fin1("output.txt");
	string lineInFile;
	while (!fin1.eof())
	{
		getline(fin1, lineInFile);
		cout << lineInFile << endl;
	}
}

