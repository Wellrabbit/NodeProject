/*
 * CTECArray.cpp
 *
 *  Created on: Feb 2, 2016
 *      Author: eort3611
 */

#include "CTECArray.h"

template <class Type>
CTECArray<Type>::CTECArray(int size)
{
	this->size = size;

}
template <class Type>
CTECArray<Type>::~CTECArray() {
	// TODO Auto-generated destructor stub
}

template <class Type>
int CTECArray<Type> :: getSize()
{
	return size;
}

template <class Type>
void CTECArray<Type> :: set(int position, Type value)
{

}

template <class Type>
Type* CTECArray<Type> :: get(int position)
{

}
