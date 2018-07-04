//============================================================================
// Name        : DynamicProgramming-LongestIncreasingSubsequence.cpp
// Author      : Shubhit Chouhan
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
int lis (int arr[],int n){

	int *lis, i, j, max = 0;
	lis = new int[n];

	for(i =0;i<n;i++)
		lis[i] = 1;

	for(i=1;i<n;i++){
		for(j=0;j<i;j++){
			if(arr[i]>arr[j] && lis[i]<lis[j]+1)
				lis[i] = lis[j] +1;
		}
	}

	for(int i =0 ;i<n;i++){
		if(lis[i]>max)
			max = lis[i];
	}

	delete lis;
	return max;
}

int main() {

	int arr[]= {10,22,9,33,21,50,41,60};
	int n = sizeof(arr)/sizeof(arr[0]);
	cout<<lis(arr,n);
	return 0;
}
