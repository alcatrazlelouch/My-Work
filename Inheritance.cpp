//============================================================================
// Name        : Inheritance.cpp
// Author      : Shubhit Chouhan
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include<iostream>
using namespace std;

class Car{
public:
	string name;
	int wheels = 4;
	int headlights = 2;
	int motot = 1;
	Car(){cout<<"YO"<<endl;}
};

class lamborghini:public Car{
public:
	void f(){ cout<<"Im lambor dude !!!"<<endl;}
};

class aventador: public lamborghini{
public:
	void a() {cout<<"no...aventador"<<endl;}
};

int main(){

	Car car;
	cout<<car.wheels<<endl;
	cout<<car.headlights<<endl;
	cout<<car.motot<<endl;

	cout<<"================="<<endl;

	lamborghini ohh;
	ohh.f();
	cout<<ohh.wheels<<endl;

	cout<<"=================="<<endl;

	aventador yeahh;
	yeahh.a();
	cout<<yeahh.motot<<endl;
	yeahh.f();

	return 0;
}
