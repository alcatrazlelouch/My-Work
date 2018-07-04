//============================================================================
// Name        : chef.cpp
// Author      : Shubhit Chouhan
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int n,m;
	        cin>>n>>m;

	        char c[n][m+1];

	        for(int i=0;i<n;i++){
	            cin>>c[i];
	        }
	        for(int j=0;j<n;j++){
	        	cout<<c[j]<<endl;
	        }
	return 0;
}
