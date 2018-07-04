//============================================================================
// Name        : Pointers.cpp
// Author      : Shubhit Chouhan
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include<iostream>
using namespace std;

int main(){
	int NSTRINGS = 5;
	string texts[NSTRINGS] = {"one","two","three","four","five"};


	cout<<&texts<<endl;
	cout<<"=================================="<<endl;
	string *ptexts = texts;

	ptexts+=3;

	cout<<*ptexts<<endl;

	ptexts-=2;
	cout<<*ptexts<<endl;

	string *pEnd = &texts[NSTRINGS];
	ptexts =&texts[0];

	while(ptexts!=pEnd){
		cout<<*ptexts<<endl;
		ptexts++;
	}

	// Set ptexts back to start;
	ptexts = &texts[0];

	long elements = (long)(pEnd-ptexts);
	cout<<elements<<endl;

	//Set ptexts back to start
	ptexts = &texts[0];

	ptexts = &texts[NSTRINGS/2];
	cout<<*ptexts <<endl;

	return 0;
}
