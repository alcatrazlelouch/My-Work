//============================================================================
// Name        : Copy.cpp
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
	Animals(){cout<<"Cash me ousside,girl....how bout that"<<endl;}
	Animals(const Animals &other/*other is animal1 object here..we are creating reference variable...const bcoz we dont wanna change methods of animal1 */):name(other.name){cout<<"Nanda kourya"<<endl;}//we have defined copy constructor here
	void setName(string name){this-> name = name;}
	void speak() const{cout<<"Name of the douchebag is "<<name<<endl;}
};

int main(){

	Animals animal1;//constructor is gonna run here only
	animal1.setName("Dog");
	animal1.speak();

	cout<<"==================="<<endl;

	Animals animal2 = animal1;//why not here??? bcoz there is special type of default constructor ..copy constructor which is being running....
	animal2.speak();// before explicitly calling copy constructor ..it printed Dog ..but not now ..bcoz we have overridden it....
	animal2.setName("Cat");
	animal2.speak();

	cout<<"======================="<<endl;
	Animals animal3(animal1);//using copy constructor here
	animal3.speak();
	return 0;

}
