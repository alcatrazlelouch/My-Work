//============================================================================
// Name        : Char.cpp
// Author      : Shubhit Chouhan
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include<iostream>
using namespace std;

int main() {
	bool bValue = true;
	bool dValue = false;
	cout << bValue << endl << dValue << endl;

	char cValue = '7';
	cout << (int)cValue << endl;
	cout << "Size of char: " << sizeof(char) << endl;

	wchar_t wValue = '7';
	cout << (char)wValue << endl;
	cout << "Size of wchar_t: " << sizeof(wchar_t) << endl;

	return 0;

}
