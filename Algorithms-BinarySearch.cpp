//============================================================================
// Name        : Algorithms-BinarySearch.cpp
// Author      : Shubhit Chouhan
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
int BinarySearch(int arr[],int l,int r,int x){

	int mid = l+ (r-l)/2;

	if(arr[mid]==x){
		return mid;
	}
	else if(arr[mid]>x){
		return BinarySearch(arr,l,mid-1,x);

	}
	else{
		return BinarySearch(arr,mid+1,r,x);
	}
	return -1;
}


int main() {
	int arr[] = {1,4,5,6,10};
	cout<<BinarySearch(arr,0,4,6);
	return 0;
}
