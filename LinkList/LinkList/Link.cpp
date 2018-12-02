#include "pch.h"
#include "Link.h"


Link::Link()
{
	head = tail = NULL;
	size = 0;
}

void Link::addItem(int v, int pos)
{
	if (pos > size || pos < 0)
	{
		cout << "positionnot valid" << endl;
		return;
	}
	else
	{
		if (head == NULL || pos==0)
		{
			addToFirst(v);
		}
		else if (pos == size)
		{
			addToLast(v);
		}
		else
		{
			Node* current = new Node;
			current = head;
			for (int i = 0; i < pos; i++)
			{
				current = current->next;
			}
			Node* temp = new Node;
			temp->key = v;
			temp->next = current->next;
			current->next = temp; 
			size++;

		}

	}


}

void Link::addToFirst(int v)
{
	Node* temp = new Node;
	temp->key = v;
	temp->next = head;
	if (head == NULL)
	{
		head = temp;
		tail = temp;
	}
	else
	{
		head = temp;
	}
	size++;

}

void Link::addToLast(int v)
{
	if (head == NULL)
	{
		addToFirst(v);
	}
	else
	{
		Node* temp = new Node;
		temp->key = v;
		tail->next = temp;
		temp->next = NULL;
		tail = temp;
		size++;

	}
}

void Link::deleteItem(int pos )
{
	if (pos >= size || pos < 0)
	{
		cout << " position is not valid" << endl;
		return;
	}
	else
	{
		if (pos == 0)
		{
			deleteFirst();
		}
		else if (pos == size-1)
		{
			deleteLast();
		}
		else
		{
			Node* current = new Node;
			current = head;
			Node* temp = new Node;
			for (int i = 1; i < pos; i++)
			{
				current = current->next;
			}
			temp = current->next;
			current->next = current->next->next;
			delete temp;
			size--;

		}
	}
}

void Link::deleteFirst()
{
	if (head != NULL)
	{
		Node*  temp = new Node;
		temp = head;
		head = head->next;
		delete temp;
	}
}

void Link::deleteLast()
{
	Node* current = new Node;
	current = head;
	for (int i = 0; i < size-2; i++)
	{
		current = current->next;
	}
	delete current->next;
	current->next = NULL;
	tail = current;
	size--;
}

bool Link::findItme(int v)
{
	return false;
}

void Link::printItems()
{
	Node* current;
	current = head;
	while (current != NULL)    // traversal 
	{
		cout << current->key << " " ;
		current = current->next;
	}
}


Link::~Link()
{
}
