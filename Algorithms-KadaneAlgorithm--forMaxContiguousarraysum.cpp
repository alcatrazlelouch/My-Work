//============================================================================
// Name        : Algorithms-KadaneAlgorithm--forMaxContiguousarraysum.cpp
// Author      : Shubhit Chouhan
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<climits>
using namespace std;

int maxSubArraySum(int arr[], int size){
	int max_so_far = INT_MIN, max_ending_here = 0,
	start = 0, end = 0, s = 0;
	for(int i = 0 ;i<size;i++){
		max_ending_here+= arr[i];
		if(max_so_far<max_ending_here){
			max_so_far = max_ending_here;
			start = s;
			end = i;
		}

		if(max_ending_here < 0){
			max_ending_here = 0;
			s=i+1;
		}
	}

	cout<<"Maximum contiguous sum is"<<max_so_far<<endl;
	cout<<"Starting index"<<start<<endl<<"Ending index "<<end<<endl;
}

int main() {
	int a[]= {-2, -3, 4, -1, -2, 1, 5, -3};
	int size = sizeof(a)/sizeof(a[0]);
	int max_sum = maxSubArraySum(a,size);
	return 0;
}
