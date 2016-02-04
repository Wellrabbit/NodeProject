/*
 * CTECArray.cpp
 *
 *  Created on: Feb 2, 2016
 *      Author: eort3611
 */

#include "CTECArray.h"
#include <iostream>
using namespace std;

template<class Type>
CTECArray<Type>::CTECArray(int size)
{
	this->size = size;
	this->head = nullptr;

	if (size <= 0)
	{
		cerr << "That is neep noop" << endl;
		return;
	}
	for (int index = 0; index < size; index++)
	{
		if (head != nullptr)
		{
			ArrayNode<Type> nextNode;
			nextNode.setNext(head);
			this->head = &nextNode;
		}
		else
		{
			ArrayNode<Type> firstNode;
			this->head = &firstNode;
		}
	}
}
template<class Type>
CTECArray<Type>::~CTECArray()
{
	ArrayNode<Type> * deleteMeh = head;
	for(int index = 0; index < size; index++)
	{
		if(deleteMeh->getNext() != nullptr)
		{
			head = deleteMeh->getNext();
			deleteMeh->setNext(nullptr);
			delete deleteMeh;
			deleteMeh = head;
		}
		else
		{
			delete deleteMeh;
			deleteMeh = head;
		}
	}
}

template<class Type>
int CTECArray<Type>::getSize()
{
	return size;
}

template<class Type>
void CTECArray<Type>::set(int position, Type value)
{

	if (position >= size || position < 0)
	{
		cerr << "Position value is out of bounds" << endl;

	}
	else
	{
		ArrayNode<Type> * current = head;
		for (int spot = 0; spot < position; spot++)
		{
			if (spot != position)
			{
				current = current->next;
			}
			else
			{
				return current->setValue(value);
			}
		}
	}
}

template<class Type>
Type* CTECArray<Type>::get(int position)
{
	if (position >= size || position < 0)
	{
		cerr << "Position value is out of bounds" << endl;
		return nullptr;
	}
	else
	{
		ArrayNode<Type> * current = head;
		for(int spot = 0; spot <= position; spot++)
		{
			if(spot != position)
			{
				current = current->next;
			}
			else
			{
				return current->getValue();
			}
		}
	}
}
