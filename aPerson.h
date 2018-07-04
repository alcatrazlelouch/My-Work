/*
 * Person.h
 *
 *  Created on: 07-Dec-2017
 *      Author: hp
 */

#ifndef APERSON_H_
#define APERSON_H_
#include<iostream>
#include<sstream>

using namespace std;


class Person {
private:
	string name;
	int age;

public:
	Person():name(" "),age(0){}
	Person(string name,int age):name(name),age(age){}
	string toString();
};

#endif /* APERSON_H_ */
