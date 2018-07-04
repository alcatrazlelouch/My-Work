//============================================================================
// Name        : codechefminimum.cpp
// Author      : Shubhit Chouhan
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<stack>
using namespace std;

void showstack(stack <int> gq){
	stack <int> g =gq;
	while(!g.empty()){
		cout<<g.top()<<" "<<flush;
		g.pop();
	}
	cout<< '\n';
}

int main() {
	int t;
	cin>>t;
	while(t--){
		stack <int> index;
		int n;
		cin>>n;
		int arr[n];
		int j = 1;
		int k=0;
		for(int i =0;i<n;i++){
			cin>>arr[i];
		}
		for(int i = 0 ;i<n;i++){
			if(i==0 && arr[0]>=arr[1]){
				j+=1;
			}
			else if(i==0 && arr[0]< arr[1]){
				index.push(0);
				j+=1;
			}
			else if(i== n-1 && arr[n-1]< arr[n-2]){
				index.push(n-1);
			}
			else if(arr[i]<arr[j] && arr[i]<arr[k]){
				index.push(i);
				j+=1;
				k+=1;
			}
			else{
				j+=1;
				k+=1;
			}

		}

		int arri = index.size();
		int arrindex[arri];
		for(int i=arri-1;i>=0;i--){
			arrindex[i]=index.top();
			index.pop();
		}
		for(int i=0;i<arri;i++){
			cout<<arrindex[i]<<" ";
		}
	}

	return 0;
}
