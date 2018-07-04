//============================================================================
// Name        : doubly.cpp
// Author      : Shubhit Chouhan
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

struct Node{
	int data;
	Node *next;
	Node *prev;
};
Node * head;
Node * GetNewNode(int x){
	Node * newNode = new Node();
	newNode->data = x;
	newNode->next = NULL;
	newNode->prev = NULL;
	return newNode;
}

void InsertAtHead(int x){
	Node *temp = GetNewNode(x);
	if(head == NULL){
		head = temp;
		return;
	}
	head->prev = temp;
	temp->next = head;
	head = temp;
}

void Print(){
	Node*temp = head;
	cout<<"Forward: "<<endl;
	while(temp!=NULL){
		cout<<temp->data<<" "<<flush;
		temp=temp->next;
	}
	cout<<endl;
}

void ReversePrint(){
	Node *temp = head;
	if(temp==NULL)return;//empty list,exit
	//Going to last node
	while(temp->next!=NULL){
		temp=temp->next;
	}
	//Traversing backward using prev pointer
	cout<<"Reverse: "<<endl;
	while(temp!=NULL){
		cout<<temp->data<<" "<<flush;
		temp=temp->prev;
	}

	cout<<endl;
}

int main() {
	head = NULL;
	InsertAtHead(2);
	InsertAtHead(4);
	InsertAtHead(6);
	Print();
	ReversePrint();
	return 0;
}
