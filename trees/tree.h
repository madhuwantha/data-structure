#pragma once
#include "Node.h"
class tree
{
public:
	Node* root;
	

	tree();
	~tree();
	
	void PreOrder(Node* current);
	void InOreder(Node* current);
	void PostOrder(Node* current);
	void PostOrder(Node* current);


};

