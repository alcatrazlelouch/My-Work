//============================================================================
// Name        : Arrays.cpp
// Author      : Shubhit Chouhan
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include<iostream>
using namespace std;

void show1(const int nElements, string texts[]){

	//cout<<sizeof(texts)<<endl; return the size of pointer

	for(int i=0;i<nElements;i++){
		cout<<texts[i]<<endl;
	}
}

void show2(const int nElements, string *texts){

	//cout<<sizeof(texts)<<endl;returns the size of pointer

	for(int i=0;i<nElements;i++){
		cout<<texts[i]<<endl;
	}
}

void show3(string (&texts)[3]){

	//cout<<sizeof(texts)<<endl;

	for(int i=0;i<sizeof(texts)/sizeof(string);i++){
		cout<<texts[i]<<endl;
	}
}


char *getshit(){
	char *pMem = new char[100];

	return pMem;
}

void delet(char *pmai){

	delete [] pmai;

}
int main(){

	string texts[] = {"apple","orange","banana"};


	show3(texts);

	char *pMemory = getshit();
	delet(pMemory);


	return 0;
}
