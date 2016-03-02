/*
 * CTECLists.h
 *
 *  Created on: Feb 29, 2016
 *      Author: eort3611
 */

#ifndef NODEMODEL_CTECLISTS_H_
#define NODEMODEL_CTECLISTS_H_
#include "ArrayNode.h"
template <class Type>
class CTECLists
{
private:
int size;
ArrayNode<Type> head;
ArrayNode<Type> end;
void clacSize();
public:
	CTECLists();
	virtual ~CTECLists();
	int getSize();
	void addToFront(const Type& value);
	void addToEnd(const Type& value);
	void addAtIndex(int index, const Type& value);
	Type getFront();
	Type getEnd();
	Type getFromIndex(int index);
	Type removeFromFront();
	Type removeFromEnd();
	Type removeFromIndex(int index);
	Type set(int index, const Type& value);

};

#endif /* NODEMODEL_CTECLISTS_H_ */
