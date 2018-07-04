//============================================================================
// Name        : deletebinarynode.cpp
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

//Function to find minimum in tree
Node *FindMin(Node *root){
	while(root->left!=NULL)root = root->left;
	return root;
}

//Function to delete a value from tree.
Node *Delete(Node*root, int data){
	if(root == NULL)return root;
	else if(data<root->data) root->left = Delete(root->left,data);
	else if(data>root->data)root->right = Delete(root->right,data);
	//Wohoo... I found you, Get ready to be deleted
	else{
		// Case 1 : No Child
		if(root->left == NULL && root->right ==NULL){
			delete root;
			root = NULL;
		}
		// Case 2 : One Child
		else if(root->left ==NULL){
			Node *temp = root;
			root = root->right;
			delete temp;
		}
		else if(root->right ==NULL){
			Node *temp = root;
			root= root->left;
			delete temp;
		}
		//Case 3 : Two children
		else{
			Node * temp = FindMin(root->right);
			root->data = temp->data;
			root->right = Delete(root->right,temp->data);
		}
	}
	return root;
}


//Function to visit nodes in Inorder
void Inorder(Node *root){
	if(root == NULL)return;
	 Inorder(root->left);
	 cout<<root->data<<" "<<flush;
	 Inorder(root->right);
}

Node *Insert(Node *root,int data){
	if(root == NULL){
		root = new Node();
		root->data = data;
		root->left = root->right = NULL;
	}
	else if(data<= root->data){
		root->left = Insert(root->left,data);
	}
	else{
		root->right = Insert(root->right,data);

	}
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

	Node *root = NULL;
	root = Insert(root,5);root = Insert(root,10);
	root = Insert(root,3);root = Insert(root,4);
	root = Insert(root,1);root = Insert(root,11);
	root = Delete(root,5);

	cout<<"Inorder: "<<flush;
	Inorder(root);
	cout<<endl;
	return 0;

}
