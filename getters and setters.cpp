//============================================================================
// Name        : getters.cpp
// Author      : Shubhit Chouhan
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include<iostream>
#include"Person.h"
using namespace std;

int main(){

	Person person;

	cout<<"Name of person is: "<<person.toString()<<endl;
	person.setName("Shubhit");
	cout<<person.getName()<<endl;


	return 0;
}
