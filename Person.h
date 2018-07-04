/*
 * Person.h
 *
 *  Created on: 06-Dec-2017
 *      Author: hp
 */

#ifndef PERSON_H_
#define PERSON_H_

#include<iostream>
using namespace std;

class Person {
private:
	string name;
public:
	Person();
	string toString();
	void setName(string newName);
	string getName();
};

#endif /* PERSON_H_ */
