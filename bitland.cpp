//============================================================================
// Name        : bitland.cpp
// Author      : Shubhit Chouhan
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main(){
	int t;
	string s;
	cin>>t>>s;
	while(t--){
		string s1;
		cin>>s1;
		for(int i =0 ;i<s1.length();i++){
			if(s1[i]>='a'&& s1[i]<='z'){
				int a = s1[i]-'a';
				cout<<s[a];
			}
			else if(s1[i]>= 'A'&& s1[i]<='Z'){
				int a = s1[i]-'A';
				cout<<(char)((int)s[a] - 32);
			}
			else if(s1[i]=='_')
				cout<<" ";
			else
				cout<<s1[i];
		}
		cout<<endl;
	}

	return 0;
}
