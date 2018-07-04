//============================================================================
// Name        : postfix.cpp
// Author      : Shubhit Chouhan
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include<iostream>
#include<cctype>
#include<stack>
using namespace std;

// returns the value when a specific operator
// operates on two operands
int eval(int op1, int op2, char operate) {
	switch (operate) {
	case '*':
		return op2 * op1;
	case '/':
		return op2 / op1;
	case '+':
		return op2 + op1;
	case '-':
		return op2 - op1;
	default:
		return 0;
	}
}
int evalPostfix(string postfix, int size) {
	stack<int> s;
	int i = 0;
	int val;
	while (i < size) {

		if (isdigit(postfix[i])) {
			s.push(postfix[i] - '0');
		} else {

			int op1 = s.top();
			s.pop();
			int op2 = s.top();
			s.pop();
			val = eval(op1, op2, postfix[i]);
			s.push(val);
		}
		i++;
	}
	return val;
}

int main() {
	string lol = "568+*2/";

	int size = sizeof(lol);
	int val = evalPostfix(lol, size);
	cout << "\nExpression evaluates to " << val;
	cout << endl;
	return 0;
}
