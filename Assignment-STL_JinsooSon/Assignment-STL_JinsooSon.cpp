#include <iostream>
#include <stdlib.h>
#include <list>
#include "node.h"
using namespace std;

void PrintList(list<int> numbers)
{
	numbers.sort();
	for (auto n : numbers)
	{
		cout << "n: " << n << endl;
	}
}

void PrintNodeList(Node* node)
{
	while (node) {
		cout << node->Data << endl;
		node = node->NextNext;
	}
}

int main() {
	list<int> testList1 = { 5, 86, 3, 21 };
	PrintList(testList1);
	Node n1(5);
	Node n2(23, &n1);
	Node n3(7, &n2);
	PrintNodeList(&n3);
	system("pause");
}