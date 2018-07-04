//============================================================================
// Name        : Ciel.cpp
// Author      : Shubhit Chouhan
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<sstream>
using namespace std;

int main() {
	int a,b,c;
	string d;
	cin>>a>>b;
	c=a-b;
	stringstream ss;
	ss<<c;
	d =ss.str();
	if(d[0]=='1'){
		d[0]='2';
	}else{
		d[0]='1';
	}

	c = atoi(d.c_str());
	cout<<c<<endl;
	return 0;
}
