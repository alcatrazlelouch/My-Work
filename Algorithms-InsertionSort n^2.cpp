//============================================================================
// Name        : Algorithms-InsertionSort.cpp
// Author      : Shubhit Chouhan
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void InsertionSort(int arr[], int n){
	int i,key,j;
	for(i =1 ;i<n;i++){
		key = arr[i];
		j=i-1;

		while(j>=0 && arr[j]>key){
			arr[j+1]=arr[j];
			j=j-1;
		}
		arr[j+1]=key;
	}
}

void printArray(int arr[],int n){
	for(int i = 0;i<n;i++){
		cout<<arr[i]<<" "<<flush;
	}
}
int main() {
	int arr[]={12,11,13,5,6};
	int n = sizeof(arr)/sizeof(arr[0]);// prints !!!Hello World!!!
	InsertionSort(arr,n);
	printArray(arr,n);
	return 0;
}
