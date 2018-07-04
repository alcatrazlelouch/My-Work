//============================================================================
// Name        : Arrays.cpp
// Author      : Shubhit Chouhan
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include<iostream>
using namespace std;

int main() {

	cout << "Array of integers" << endl;
	cout << "=================" << endl;

	int values[3];

	values[0] = 88;
	values[1] = 123;
	values[2] = 7;

	cout << values[0] << endl;
	cout << values[1] << endl;
	cout << values[2] << endl;

	cout << endl << "Array of doubles" << endl;
	cout << "=================" << endl;

	double numbers[4] = { 3, 2, 4, 1 };

	for (int i = 0; i < 4; i++) {
		cout << "Element at index " << i << ": " << numbers[i] << endl;
	}

	cout << endl << "Initializing with zero values" << endl;
	cout << "=================" << endl;

	int numberArray[8] = { };

	for (int i = 0; i < 4; i++) {
		cout << "Element at index " << i << ": " << numberArray[i] << endl;
	}

	cout << endl << "Array of strings" << endl;
	cout << "=================" << endl;

	string text[] = {"apple","banana","avocado"};
	for (int i = 0; i < 3; i++) {
			cout << "Element at index " << i << ": " << text[i] << endl;
		}
	cout << endl << "Array of multiplication table of 12" << endl;
	cout << "=================" << endl;

	int twelve[10]={};
	int j=0;

	for(int i=0;i<10;i++){
		j=j+12;
		twelve[i]=j;
	}

	for (int i = 0; i < 10; i++) {
			cout << "Element at index " << i << ": " << twelve[i] << endl;
	}

	return 0;
}
