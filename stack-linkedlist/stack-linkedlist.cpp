// stack-linkedlist.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include"list.h"

list* listo = new list;

int main()
{
	int num; char i;
	while (true) {
		cout << "To push elements into stack press 'g'and to pop press'x' and to print the stack press 'p' and to exit press 'e':";
		cin >> i;
		if (i == 'g') {
			cout << "Enter the number you want to push in th stack:";
			cin >> num;
			listo->push(num);
		}
		else if (i == 'x') {
			listo->pop();
		}
		else if (i == 'p') {
			listo->printlist();
		}
		else if (i == 'e') {
			listo->printlist();
			break;
		}
	}
	system("pause");
	return 0;
}

