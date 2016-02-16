/*
 * NodeController.cpp
 *
 *  Created on: Jan 27, 2016
 *      Author: eort3611
 */

#include "NodeController.h"
#include <iostream>
using namespace std;

NodeController::NodeController()
{

//stringNode.setValue("asdsads");
//intNode.setValue(999);
//stringArrayNode.setValue("Words");
//otherArrayNode.setValue("Link");
//stringArrayNode.setNext(&otherArrayNode);
	notHipsterEnough = new CTECArray<int>(5);
}

NodeController::~NodeController()
{
	// TODO Auto-generated destructor stub
}

void NodeController::start()
{
	arrayTimer.startTimer();
	for (int index = 0; index < notHipsterEnough->getSize(); index++)
	{
		notHipsterEnough->set(index, (index * 7));
	}

	for (int index = notHipsterEnough->getSize() - 1; index >= 0; index--)
	{
		cout << "The spot is" << index << "And the place is"
				<< notHipsterEnough->get(index) << endl;
	}
	arrayTimer.stopTimer();
	arrayTimer.displayTimerInfo();
}
