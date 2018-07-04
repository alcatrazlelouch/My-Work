//============================================================================
// Name        : chef.cpp
// Author      : Shubhit Chouhan
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<iomanip>
using namespace std;

double afterprice(int p,int x){
	double after = (double)p+((double)x/100)*(double)p;
	return after-((double)x/100)*(after);
}

int main() {
	int x = 0;
	int t;
	cin>>t;
	while(x<t){

	int n;
	double loss=0;
	cin>>n;
	int arr[3];
	for(int i=0;i<n;i++){
		for(int i=0;i<3;i++){
			cin>>arr[i];
		}

		loss+=arr[1]*(arr[0]-afterprice(arr[0],arr[2]));
	}

	cout<<setprecision(13)<<loss<<endl;
	x++;
	}
	return 0;
}
