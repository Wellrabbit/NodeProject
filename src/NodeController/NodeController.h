/*
 * NodeController.h
 *
 *  Created on: Jan 27, 2016
 *      Author: eort3611
 */

#ifndef NODECONTROLLER_NODECONTROLLER_H_
#define NODECONTROLLER_NODECONTROLLER_H_
#include "Node.h"
#include "Node.cpp"
#include <string>
#include "ArrayNode.cpp"
#include "ArrayNode.h"
using namespace std;

class NodeController {
private:
	Node<string> stringNode;
	Node<int> intNode;
	ArrayNode<string> stringArrayNode;
	ArrayNode<string> otherArrayNode;
public:
	NodeController();
	virtual ~NodeController();
	void start();
};

#endif /* NODECONTROLLER_NODECONTROLLER_H_ */
