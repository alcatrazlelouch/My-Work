//============================================================================
// Name        : Encapsulation.cpp
// Author      : Shubhit Chouhan
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include<iostream>
using namespace std;

class Frog{
private :
	string name;
private:
	string getName(){return name;}

public:
	Frog(string name):name(name){}
	void info(){cout<<"My name is: "<<getName()<<endl;}
};

int main(){


	Frog frog("Fries");
	frog.info();
	//frog.getName();
	//cout<<frog.name<<endl;
	return 0;
}
