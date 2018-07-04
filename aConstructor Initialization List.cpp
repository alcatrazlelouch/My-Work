//============================================================================
// Name        : Constructor.cpp
// Author      : Shubhit Chouhan
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include<iostream>
#include"aPerson.h"
using namespace std;

int main(){

	Person person1;
	Person person2("Bob",19);
	Person person3("Sue",30);


	cout<<person1.toString()<<endl;
	cout<<person2.toString()<<endl;
	cout<<person3.toString()<<endl;

	return 0;
}
