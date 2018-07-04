//============================================================================
// Name        : binary.cpp
// Author      : Shubhit Chouhan
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

struct BstNode{
	int data;
	BstNode*left;
	BstNode* right;
};


BstNode* GetNewNode(int data){
	BstNode * newNode = new BstNode();
	newNode->data = data;
	newNode->left = newNode->right = NULL;
	return newNode;
}
BstNode* Insert(BstNode *root ,int data){
	if(root == NULL){
		root = GetNewNode(data);
	}
	else if(data<= root->data){
		root->left = Insert(root->left,data);
	}
	else{
		root->right = Insert(root->right,data);

	}
	return root;
}

bool Search(BstNode* root,int data){
	if(root == NULL) return false;
	else if(root->data == data) return true;
	else if(data <= root->data) return Search(root->left,data);
	else return Search(root->right,data);
}

int FindMin(BstNode *root){
	if(root==NULL){
		cout<<"Error: Tree is empty\n";
		return -1;
	}
	while(root->left!=NULL){
		root = root->left;
	}
	return root->data;
}

int FindMax(BstNode *root){
	if(root==NULL){
		cout<<"Error: Tree is empty\n";
		return -1;
	}
	while(root->right!=NULL){
		root = root->right;
	}
	return root->data;
}

int Min(BstNode *root){
	if(root==NULL){
		cout<<"Error: Tree is empty\n";
		return -1;
	}
	else if(root->left == NULL){
		return root->data;
	}
	return Min(root->left);
}//Same for max;

int main() {
	BstNode* root = NULL;
	root = Insert(root,15);
	root = Insert(root,10);
	root = Insert(root,20);
	root = Insert(root,25);
	root = Insert(root,8);
	root = Insert(root,12);
	cout<<Min(root)<<endl;
	cout<<FindMin(root)<<endl;
	cout<<FindMax(root)<<endl;
	int number;
	cout<<"Enter number be searched\n";
	cin>>number;
	if(Search(root,number)==true)cout<<"Found\n";
	else cout<<"NotFound\n";
	return 0;
}
