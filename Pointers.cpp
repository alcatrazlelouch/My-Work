//============================================================================
// Name        : Pointers.cpp
// Author      : Shubhit Chouhan
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include<iostream>
using namespace std;

void manipulate(double *value){
	cout<<"2. Value of double in manipulate : "<<*value<<endl;
	*value = 10.0;
	cout<<"3. Value of double in manipulate : "<<*value<<endl;



}

int main(){

	int value =4;
	int *pvalue = &value;
	cout<<pvalue<<endl;
	cout<<*pvalue<<endl;
	cout<<value<<endl;
	cout<<&value<<endl;

	cout<<"================="<<endl;

	double dValue = 20.0;

	cout<<"1. dValue: "<<dValue<<endl;
	manipulate(&dValue);
	cout<<"4. dValue: "<<dValue<<endl;




	return 0;
}
