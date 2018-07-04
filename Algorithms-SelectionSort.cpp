//============================================================================
// Name        : Algorithms-SelectionSort.cpp
// Author      : Shubhit Chouhan
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void SelectionSort(int arr[], int n){
	for(int x = 0 ;x<n;x++){
		int min_index = x;
		for(int y = x ;y<n;y++){
			if(arr[min_index]>arr[y]){
				min_index = y;
			}
		}

		int temp = arr[min_index];
		arr[min_index] = arr[x];
		arr[x] = temp;
	}

}


int main() {

	int arr[] = {1,4,2,5,4,0};
	SelectionSort(arr,6);
	for(int i = 0 ;i<6;i++){
		cout<<arr[i]<<" ";
	}

	return 0;
}
