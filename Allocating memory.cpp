//============================================================================
// Name        : Allocating.cpp
// Author      : Shubhit Chouhan
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
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

int main() {
	Animals *pAnimal = new Animals[10];

	pAnimal[5].setName("George");
	pAnimal[5].speak();

	delete [] pAnimal;

	char *pMem = new char[100];
	delete pMem;

	char los = 'c';
	cout<<los<<endl;
	string name(5,los);
	cout<<name<<endl;


	return 0;

}
