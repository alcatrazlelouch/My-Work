//============================================================================
// Name        : Char.cpp
// Author      : Shubhit Chouhan
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include<iostream>
using namespace std;

int main(){

	char text[] = "hello";
	cout<<sizeof(text)<<endl;

	for(unsigned int i=0;i<sizeof(text);i++){
		cout<< i <<": "<<text[i]<<endl;
	}
	cout<<endl;

	int k=0;

	while(true){


		if(text[k]==0){
			break;}

		cout<<text[k]<<flush;
		k++;

	}

	cout<<endl;
	cout<<text<<endl;

	return 0;
}
