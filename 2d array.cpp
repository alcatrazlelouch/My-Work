//============================================================================
// Name        : 2d.cpp
// Author      : Shubhit Chouhan
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int arr[6][6];
	for(int i=0 ;i<6;i++){
	        for(int j=0;j<6;j++){
	            cin>>arr[i][j];
	        }
	int m=0;
	for(int n=0;n<3;n++){
	for(int i=0;i<3;i++){
		int sum =0;
		int j=m;
		for(int j; j<m+3 ;j++){
			if(i%2 == 0){
				sum+=arr[i][j];
			}
		}
		m+=1;
	}

	}
	return 0;
}
