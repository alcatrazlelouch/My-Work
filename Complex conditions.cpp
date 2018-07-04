//============================================================================
// Name        : Complex.cpp
// Author      : Shubhit Chouhan
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	int value1 = 7;
	int value2 = 4;

	if (value1 >= 5) {
		cout << "Condition 1 :true" << endl;
	} else {
		cout << "Condition 1: false" << endl;
	}

	if (value1 == 7 && value2 < 3) {
		cout << "Condition 2: true" << endl;
	} else {
		cout << "Condition 2: false" << endl;
	}

	if (value1 == 7 || value2 < 3) {
		cout << "Condition 3: true" << endl;
	} else {
		cout << "Condition 3: false" << endl;
	}

	bool condition1 = (value2 != 8) && (value1 == 10);

	bool condition2 = value1 < 10;

	if (condition1 || condition2) {
		cout << "Condition 4: true" << endl;
	} else {
		cout << "Condition 4:true" << endl;
	}

	return 0;
}
