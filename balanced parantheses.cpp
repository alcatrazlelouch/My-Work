//============================================================================
// Name        : balanced.cpp
// Author      : Shubhit Chouhan
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<stack>
#include<string>
using namespace std;

bool ArePair(char op,char clo){
	if(op=='('&&clo==')')return true;
	else if(op=='['&&clo==']')return true;
	else if(op=='{'&&clo=='}')return true;
	else return false;
}

bool AreParanthesesBalanced(string exp){
	stack<char> S;
	for(int i=0;i<exp.length();i++){
		if(exp[i]=='('||exp[i]=='{'||exp[i]=='[')
			S.push(exp[i]);
		else if(exp[i]==')'||exp[i]=='}'||exp[i]==']')
		{
			if(S.empty()||!ArePair(S.top(),exp[i]))
				return false;
			else
				S.pop();
		}
	}

	return S.empty();
}

int main() {
	string v = "({[})";
	cout<<AreParanthesesBalanced(v)<<flush;

	return 0;
}
