//============================================================================
// Name        : Linked.cpp
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
};
Node *head;
void Insert(int data){
	Node* temp1 = new Node();
	temp1->data = data;
	temp1->next = NULL;
	Node*curr = head;
	Node *prev = NULL;
	if(head==NULL){
		head = temp1;
	}else{
		while(curr!=NULL){
			prev = curr;
			curr= curr->next;
		}
		prev->next = temp1;
	}
}
void Print(){
	Node *temp = head;
	while (temp!=NULL){
		cout<<temp->data<<" "<<flush;
		temp = temp->next;
	}
}
void Delete(int n){
	Node *curr = head;
	Node *prev = NULL;
	int j = 0;
	if(n!=1){
	while (j<n-1){
		prev = curr;
		curr= curr->next;
		j++;
	}
	prev->next = curr->next;
	delete curr;
	}else{
		head = curr->next;
		delete curr;
	}

}


int main() {
	head= NULL;
	Insert(2);
	Insert(4);
	Insert(6);
	Insert(5);
	Print();
	int n;
	cout<<endl;
	cout<<"Enter a position \n"<<endl;
	cin>>n;
	Deletev(n);
	Print();

	return 0;
}
