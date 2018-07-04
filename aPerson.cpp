/*
 * Person.cpp
 *
 *  Created on: 07-Dec-2017
 *      Author: hp
 */

#include "aPerson.h"


string Person::toString(){

	stringstream ss;
	ss<<"Name: "<<flush;
	ss<<name<<endl;
	ss<<"Age: "<<flush;
	ss<<age<<flush;

	return ss.str();

}


