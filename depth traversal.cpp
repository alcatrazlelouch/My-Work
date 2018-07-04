//============================================================================
// Name        : depth.cpp
// Author      : Shubhit Chouhan
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

using namespace std;

struct Node{
	char data;
	Node *left;
	Node *right;
};

void Preorder(Node *root){
	if(root ==NULL)return;
	cout<<root->data<<" "<<flush;
	Preorder(root->left);
	Preorder(root->right);
}

void Inorder(Node *root){
	if(root ==NULL) return;
	Inorder(root->left);
	cout<<root->data<<" "<<flush;
	Inorder(root->right);
}

void Postorder(Node *root){
	if(root==NULL) return;
	Postorder(root->left);
	Postorder(root->right);
	cout<<root->data<<" "<<flush;
}

Node* Insert(Node *root ,char data){
	if(root==NULL){
		root = new Node();
		root->data=data;
		root->left = root->right = NULL;
	}

	else if(data<= root->data)
		root->left= Insert(root->left , data);
	else
		root->right =Insert(root->right,data);

	return root;
}
int main() {

	Node* root = NULL;
	root = Insert(root,'M');root = Insert(root,'B');
	root = Insert(root,'Q');root = Insert(root,'Z');
	root = Insert(root,'A');root = Insert(root,'C');

	cout<<"Preorder: "<<flush;
	Preorder(root);
	cout<<endl;
	cout<<"Inorder: "<<flush;
	Inorder(root);
	cout<<endl;
	cout<<"Postorder: "<<flush;
	Postorder(root);
	cout<<endl;


	return 0;
}
