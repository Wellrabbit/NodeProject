/*
 * NodeController.cpp
 *
 *  Created on: Jan 27, 2016
 *      Author: eort3611
 */

#include "NodeController.h"
#include <iostream>
using namespace std;

NodeController::NodeController() {

stringNode.setValue("asdsads");
intNode.setValue(999);
stringArrayNode.setValue("Words");
otherArrayNode.setValue("Link");
stringArrayNode.setNext(&otherArrayNode);
}

NodeController::~NodeController() {
	// TODO Auto-generated destructor stub
}

void NodeController :: start()
{
cout << stringNode.getValue() << endl;
cout << stringArrayNode.getValue() << endl;

}
