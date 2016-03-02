/*
 * CTECLists.cpp
 *
 *  Created on: Feb 29, 2016
 *      Author: eort3611
 */

#include "CTECLists.h"

#include <Assert.h>
template<class Type>
CTECLists::CTECLists(int size)
{
this->size = size;
this->head = nullptr;

assert(size > 0);
	for (int index = 0; index <= size; index++)
	{
		if (head != nullptr)
		{
			ArrayNode<Type> * nextNode = new ArrayNode<Type>();
			nextNode->setNext(head);
			this->head = nextNode;
		}
		else
		{
			ArrayNode<Type> * firstNode = new ArrayNode<Type>();
			this->head = firstNode;
		}
	}
}

template<class Type>
CTECLists::~CTECLists()
{

}

template <class Type>
int CTECLists<Type>::getSize()
{
	return size;
}

template<class Type>
void CTECList<Type> :: addToFront(const Type& value)
{

}
template <class Type>
void CTECList<Type> :: clacSize()
{
	assert(size >= 0);
	int count = 0;
	if(head == nullptr)
	{
		size = 0;
	}
	else
	{
		count++;
		ArrayNode<Type> * current = head;
		while(current->getNext() != nullptr)
		{
			cout++
			current = current->getNext();
		}
		size = count;
	}
}
