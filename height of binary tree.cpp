//============================================================================
// Name        : height.cpp
// Author      : Shubhit Chouhan
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
struct Node{
	int data;
	Node *right;
	Node *left;
};

Node* Getnew(int data){
	Node *temp = new Node();
	temp->data = data;
	temp->left = temp->right = NULL;
	return temp;
}

Node* Insert(Node *root ,int data){
	if(root==NULL){
		root=Getnew(data);
	}
	else if(data <= root->data){
		root->left = Insert(root->left,data);
	}
	else{
		root->right = Insert(root->right,data);
	}

	return root;
}

void Search(Node *root,int data){
	if(root==NULL) return;
	if(root->data == data) cout<<"data found";
	else if(data <=root->data) Search(root->left,data);
	else Search(root->right,data);
}

int FindHeight(Node *root){
	if(root ==NULL){
		return -1;
	}
	return max(FindHeight(root->left),FindHeight(root->right)) +1;
}

int main() {
	Node *root =NULL;
	root = Insert(root,8);
	root = Insert(root,15);
	root = Insert(root,7);
	root = Insert(root,25);
	FindHeight(root);

	return 0;
}
