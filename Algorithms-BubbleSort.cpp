//============================================================================
// Name        : Algorithms-BubbleSort.cpp
// Author      : Shubhit Chouhan
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void BubbleSort(int arr[], int n){
	for(int x = 0 ;x<n;x++){

		for(int y = 0 ;y<n-1;y++){
			if(arr[y]>arr[y+1]){
				int temp = arr[y+1];
				arr[y+1] = arr[y];
				arr[y] = temp;
			}
		}

	}

}

int main() {
	int arr[] = {1,4,3,9,5};
	BubbleSort(arr,5);
	for(int i = 0 ;i<5;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}
