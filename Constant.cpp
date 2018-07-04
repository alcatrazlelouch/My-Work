//============================================================================
// Name        : Constant.cpp
// Author      : Shubhit Chouhan
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include<iostream>
using namespace std;

class Animal{
private:
	string name;
public:
	void setName(string name){this->name=name;}
	void getName(){cout<<"Name of this douchbag is "<<name<<endl; }
};

int main(){

	const double PI =3.1415162;
	cout<<PI<<endl;
	cout<<"===================="<<endl;
	Animal animal;
	animal.setName("Oompha Loompha");
	animal.getName();

	cout<<"===================="<<endl;
	int value = 8;
	int * pValue = &value;
	cout<<*pValue<<endl;

	cout<<"===================="<<endl;
	int number = 11;
	pValue = &number;//Due to this int * const pValue = &value;{Pointer can only point at one address, but you can change the value associated with that address}
	*pValue =12;//Due to this  const int *pValue = &value;{Pointer is can point at different addresses, but its value which is been stored cant be changed}
	cout<<*pValue<<endl;


	return 0;
}
