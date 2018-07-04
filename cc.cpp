//============================================================================
// Name        : cc.cpp
// Author      : Shubhit Chouhan
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cmath>
using namespace std;
double qe(double a,double b,double c){
	double d1 = pow(b,2) - 4*a*c;
	double x1 = (-b+sqrt(d1))/(2*a);
	double x2 = (-b-sqrt(d1))/(2*a);
	return max(c*x1 + pow(x1,3)-(pow(x1,2)*b)/2,c*x2 + pow(x2,3)-(pow(x2,2)*b)/2);
}

int main() {
	/*int t;
	cin>>t;
	while(t--){
		int p,s;
		cin>>p>>s;
		cout<<qe(3,p/2,pow(s,2)/2)<<flush;
	}*/
	cout<<qe(3,10,98);
	return 0;
}
