//============================================================================
// Name        : ABCD.cpp
// Author      : Shubhit Chouhan
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class abcd{
private:
	char name;
public:

	void setName(char name){this->name = name; }
	void speak(){
		cout<<name<<endl;
	}
};

int main() {

	char a = 'a';
	for(int i=0;i<26;i++,a++){
		abcd *pa = new abcd[26];
		pa[1].setName(a);
		pa[1].speak();

		delete [] pa;

	}

	return 0;

}
