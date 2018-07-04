/*
 * Person.cpp
 *
 *  Created on: 06-Dec-2017
 *      Author: hp
 */
#include<iostream>
#include "Person.h"
using namespace std;

Person::Person() {
	// TODO Auto-generated constructor stub
	name = "George";
}


string Person::toString(){
	return name;
	}

void Person::setName(string newName){

	name = newName;
}

string Person::getName(){
	return name;
}
