/*
 * ArrayNode.h
 *
 *  Created on: Jan 29, 2016
 *      Author: eort3611
 */

#ifndef NODECONTROLLER_ARRAYNODE_H_
#define NODECONTROLLER_ARRAYNODE_H_

#include "Node.h"
template <class Type>
class ArrayNode: public Node<Type>
{
private:
	ArrayNode * next;
public:
	ArrayNode();
	ArrayNode(Type value);
	ArrayNode(Type value, ArrayNode * next);
	virtual ~ArrayNode();
	ArrayNode * getNext();
	void setNext(ArrayNode * next);
};

#endif /* NODECONTROLLER_ARRAYNODE_H_ */
