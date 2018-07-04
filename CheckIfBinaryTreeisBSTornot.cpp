//============================================================================
// Name        : CheckIfBinaryTreeisBSTornot.cpp
// Author      : Shubhit Chouhan
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <climits>
using namespace std;

struct Node{
	int data;
	Node * right;
	Node *left;
};

Node* Getnew(int data){
	Node *temp = new Node();
	temp->data = data;
	temp->left = temp->right = NULL;
	return temp;
}

Node* Insert(Node *root,int data){
	if(root == NULL){
		root = Getnew(data);
	}
	else if(data <= root->data){
		root->left = Insert(root->left,data);
	}
	else{
		root->right = Insert(root->right,data);
	}
	return root;
}

bool IsBstUtil(Node *root, int minvalue, int maxvalue){
	if(root==NULL) return true;

	if(root->data> minvalue && root->data < maxvalue && IsBstUtil(root->left,minvalue,root->data)&& IsBstUtil(root->right,root->data,maxvalue))
		return true;

	else
		return false;
}

bool IsBinarySearchTree(Node *root){
	return IsBstUtil(root,INT_MIN,INT_MAX);
}

int main() {
	Node *root = NULL;
	root = Insert(root,10);
	root = Insert(root,18);
	root = Insert(root,8);
	root = Insert(root,25);
	root = Insert(root,76);
	cout<<IsBinarySearchTree(root);
	return 0;
}
