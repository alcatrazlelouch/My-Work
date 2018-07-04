//============================================================================
// Name        : New.cpp
// Author      : Shubhit Chouhan
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include<iostream>
using namespace std;

class Animals{
private:
	string name;
public:
	Animals(){
		cout<<"Animal has been created"<<endl;
	}
	~Animals(){
		cout<<"Animal has been destroyed"<<endl;
	}
	Animals(const Animals &other) : name(other.name){
		cout<<"Copy constructor has been initiated"<<endl;
	}

	void setName(string name){this->name = name; }
	void speak(){
		cout<<"My name is "<<name<<endl;
	}
};

int main(){

	Animals *pAnimal1 = new Animals();//new allocates memory

	pAnimal1->setName("Bandar");
	pAnimal1->speak();

	delete pAnimal1;

	return 0;
}
