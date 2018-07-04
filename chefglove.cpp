//============================================================================
// Name        : chefglove.cpp
// Author      : Shubhit Chouhan
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

bool compare(int l[],int g[],int n){
	int i=0;
	int k =0;
	while(i<n){
		if(l[i]<=g[i]){
			k++;
		}
		i++;
	}

	if(k==n){
		return true;
	}
	else{
		return false;
	}
}



int main() {
	int x = 0;
	int t;
	cin>>t;
	while(x<t){

    int n ;
    int i=0;
    cin>>n;
    int l[n];
    while(i<n){
        cin>>l[i];
        i++;
    }
    int j=0;
    int g[n];
    while(j<n){
            cin>>g[j];
            j++;
        }
    int r[n];
    int k =0;
    while (k<n){
    	r[k] = g[n-1-k];
    	k++;
    }

    if(compare(l,g,n)&&compare(l,r,n)){
    	cout<<"both"<<endl;
    }
    else if(compare(l,g,n)){
    	cout<<"front"<<endl;
    }
    else if(compare(l,r,n)){
    	cout<<"back"<<endl;
    }
    else{
    	cout<<"none"<<endl;
    }


	// your code goes here
	x++;
	}

	return 0;
}
