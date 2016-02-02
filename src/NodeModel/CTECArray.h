/*
 * CTECArray.h
 *
 *  Created on: Feb 2, 2016
 *      Author: eort3611
 */

#ifndef NODEMODEL_CTECARRAY_H_
#define NODEMODEL_CTECARRAY_H_
#include "ArrayNode.h"
template <class Type>
class CTECArray {
private:
	int size;
	ArrayNode<Type> * head;
public:
	CTECArray(int size);
	virtual ~CTECArray();
	int getSize();
	void set(int position, Type value);
	Type* get(int position);

};

#endif /* NODEMODEL_CTECARRAY_H_ */
