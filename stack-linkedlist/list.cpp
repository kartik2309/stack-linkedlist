#include "stdafx.h"
#include "list.h"


list::list()
{
	head = NULL;
	curr = NULL;
	temp = NULL;
}

list::~list()
{
}

void list::push(int adddata)
{
	nodeptr n = new node;
	n->data = adddata;
	n->next = NULL;
	if (head != NULL) {
		curr = head;
		while (curr->next != NULL)
			curr = curr->next;
		curr->next = n;
	}
	else {
		head = n;
	}
}

void list::pop()
{
	if (head == NULL) {
		cout << "Stack is already empty" << endl;
	}
	else {
		cout << "Element popped from the stack!" << endl;
		curr = head;
		while (curr->next != NULL) {
			temp = curr;
			curr = curr->next;
		}

		if (curr == head) {
			delete head;
			head = NULL;
			temp = NULL;
		}
		else {
			delete curr;
			temp->next = NULL;
		}
	}
}

void list::printlist()
{
	temp = head;
	if (temp == NULL) {
		cout << "Stack is empty!" << endl;
	}
	else {
		cout << "Stack looks like!" << endl;
		while (temp != NULL) {
			cout << temp->data << endl;
			temp = temp->next;
		}
	}
}
