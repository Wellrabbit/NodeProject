/*
 * Node.h
 *
 *  Created on: Jan 27, 2016
 *      Author: eort3611
 */

#ifndef NODECONTROLLER_NODE_H_
#define NODECONTROLLER_NODE_H_

template <class Type>
class Node {
private:
	Type value;
	Node * pointers;
public:
	Node();
	Node(Type value);
	~Node();
	Type getValue();
	void setValue(Type value);
	Node * getPointers();

};

#endif /* NODECONTROLLER_NODE_H_ */
