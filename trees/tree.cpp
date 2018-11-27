#include "pch.h"
#include "tree.h"
#include <iostream>]
using namespace std;


tree::tree()
{
	root = NULL;
}

tree::~tree()
{
}

void tree::PreOrder(Node* current)
{
	if (current == NULL)
	{
		return;
	}
	cout << current->key << endl;
	PreOrder(current->left);
	PreOrder(current->right);
}

void tree::InOreder(Node * current)
{
	if (current == NULL) {
		return;
	}
	InOreder(current->left);
	cout << current->key  ;
	InOreder(current->right);
}

void tree::PostOrder(Node * current)
{
	if (current == NULL) {
		return;
	}
	InOreder(current->left);
	InOreder(current->right);
	cout << current->key;
}


