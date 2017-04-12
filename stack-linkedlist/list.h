#pragma once
#include<iostream>

using namespace std;

class list
{
	typedef struct node {
		int data;
		node* next;
	}*nodeptr;
	nodeptr head, curr, temp;
public:
	list();
	~list();
	void push(int);
	void pop();
	void printlist();
};


