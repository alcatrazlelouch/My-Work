//============================================================================
// Name        : pointers.cpp
// Author      : Shubhit Chouhan
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include<iostream>
using namespace std;

int main(){
	string texts[]={"One","Two","Three"};

	string *ptexts = texts;
	cout<<*ptexts<<endl;
	cout<<endl;

	for(int i = 0;i< sizeof(texts)/sizeof(string);i++){
			cout<<*ptexts<<" "<<flush;
		}
	return 0;
}
