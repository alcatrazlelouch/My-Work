/*
 * Cat.cpp
 *
 *  Created on: 05-Dec-2017
 *      Author: hp
 */
#include<iostream>
#include "Cat.h"

using namespace std;


void Cat::speak(){
	if(happy){
		cout<<"Meowww"<<endl;
	}else{
		cout<<"Ssssss"<<endl;
	}
}
Cat::Cat() {
	cout<<"Cat is created"<<endl;
	happy=true;

}

Cat::~Cat() {
	cout<<"Cat is destroyed"<<endl;
}

