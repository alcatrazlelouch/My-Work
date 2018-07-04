//============================================================================
// Name        : Inordersuccesor.cpp
// Author      : Shubhit Chouhan
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
struct Node{
	int data;
	Node *left;
	Node *right;
};

//Function to find some data in the tree
Node *Find(Node *root , int data){
	if(root == NULL)return NULL;
	else if(data== root->data)return root;
	else if(root->data < data) return Find(root->right,data);
	else return Find(root->left, data);

}

//Function to find minimum value in BST
Node* FindMin(Node *root){
	if(root == NULL)return NULL;
	while(root->left!=NULL)
		root= root->left;
	return root;
}

Node* GetSuccessor(Node *root,int data){

	Node *current = Find(root,data);
	if(current == NULL)return NULL;
	if(current ->right!= NULL)
		return FindMin(current->right);
	else{
		Node *successor = NULL;
		Node *ancestor = root;
		while(ancestor!=current){
			if(ancestor->data>current->data){
				successor = ancestor;
				ancestor= ancestor->left;
			}
			else
				ancestor = ancestor->right;
		}
		return successor;
	}
}

void Inorder(Node *root){
	if(root == NULL)return;

	Inorder(root->left);
	cout<<root->data<<" "<<flush;
	Inorder(root->right);
}

Node* Insert(Node *root,int data){
	if(root ==NULL){
		root = new Node();
		root->data = data;
		root->left = root->right = NULL;

	}
	else if(data<= root->data){
		root->left = Insert(root->left,data);

	}
	else
		root->right =Insert(root->right, data);

	return root;

}

int main() {

	/*Code To Test the logic
		  Creating an example tree
		            5
				   / \
				  3   10
				 / \   \
				1   4   11
	    */

	Node *root =NULL;
	root = Insert(root, 5);root = Insert(root, 5);
	root = Insert(root, 3);root = Insert(root, 4);
	root = Insert(root, 1);root = Insert(root, 11);

	cout<< "Inorder Traversal: ";
	Inorder(root);
	cout<<"\n";

	Node *successor = GetSuccessor(root,1);
	if(successor == NULL)cout<<"No successor found\n";
	else
		cout<<"Successor is"<<successor->data<<endl;
	return 0;
}
