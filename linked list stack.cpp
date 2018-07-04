//============================================================================
// Name        : linked.cpp
// Author      : Shubhit Chouhan
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

struct Node{
	int data;
	Node *link;
};
Node *top = NULL;
void Push(int x){
	Node *temp = new Node();
	temp->data = x;
	temp->link = top;
	top = temp;
}
void Pop(){
	Node *temp;
	if(top==NULL)return;
	temp = top;
	top = top->link;
	delete temp;
}

int Top(){
	return top->data;
}

void IsEmpty(){
	if(top==NULL)
		cout<<"Empty"<<flush;
	else
		cout<<"Not Empty"<<flush;
}

void Print(){
	Node *temp = top;
	while(temp!=NULL){
		cout<<temp->data<<" "<<flush;
		temp=temp->link;
	}
}
int main() {
	Push(2);
	Push(3);
	Push(5);
	Push(6);
	Print();
	Pop();
	cout<<endl;
	Print();
	cout<<endl;
	IsEmpty();
	cout<<endl;
	cout<< Top()<<flush;

	return 0;
}
