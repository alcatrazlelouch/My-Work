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
	Node *next;
};
void Print(Node* head){
	cout<<"List is: "<<flush;
	while(head!=NULL){
		cout<<head->data<<" "<<flush;
		head=head->next;
	}
	cout<<"\n";
}

void Insert(Node**head,int x){
	Node* temp = new Node;
	temp->data = x;
	temp->next = NULL;
	if(*head!= NULL)temp->next = *head;
	*head = temp;
}


int main() {
	Node *head = NULL;
	cout<<"How many numbers?\n"<<flush;
	int n,i,x;
	cin>>n;
	for(i=0;i<n;i++){
		cout<<"Enter number\n "<<flush;
		cin>>x;
		Insert(&head,x);
		Print(head);

	}



	return 0;
}
