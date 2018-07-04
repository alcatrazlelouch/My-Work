//============================================================================
// Name        : Floating.cpp
// Author      : Shubhit Chouhan
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include<iostream>
#include<iomanip>

using namespace std;
int main() {
	float fValue = 123.4566789089;
	cout << fValue << endl;

	cout << "Size of float: " << sizeof(float) << endl;
	cout << setprecision(9) << fixed << fValue << endl;

	double dValue = 123.456789089;
	cout << setprecision(7) << fixed << dValue << endl;

	long double lValue = 123.45678976543210;
	cout << setprecision(14) << fixed << lValue << endl;
	cout << "Size of long double: " << sizeof(lValue) << endl;

	return 0;
}
