#pragma once
#include "Node.h"
#include <iostream>
using namespace std;

class Link
{
public:
	Node* head;
	Node* tail;
	int size;

	Link();
	void addItem(int v, int pos);
	void addToFirst(int v);
	void addToLast(int v);
	void deleteItem(int pos);
	void deleteFirst();
	void deleteLast();
	bool findItme(int v);
	void printItems();



	~Link();
};

