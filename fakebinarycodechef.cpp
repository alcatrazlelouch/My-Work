//============================================================================
// Name        : fakebinarycodechef.cpp
// Author      : Shubhit Chouhan
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include<iostream>
#include<string.h>
using namespace std;

int linear(int arr[],int n, int x){
	int i=0;
	while(i<n){
			if(arr[i]==x){
				return i;
			}
			i++;
		}

	return -1;
}

int main() {
	int t;
	int n,q,low,high,mid,lc,hc,swap,x,pos;
	cin>>t;
	while(t--){
		cin>>n>>q;
		int arr[n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		while(q--){
//			cin>>x;
//			lc = 0;
//			hc = 0;
//			swap = 0;
//			low = 0;
//			high = n-1;
//			mid = (low + high)/2;
//			pos = linear(arr,n,x);
//			while((mid != pos)){
//				mid = (low + high)/2;
//				if(pos > mid){
//					if(arr[mid] > x){
//						lc++;
//					}
//					low = mid + 1;
//					arr[mid] = 0;
//				} else {
//					if(arr[mid] < x){
//						hc++;
//					}
//					high = mid - 1;
//					arr[mid] = 0;
//				}
//			}

//			if(lc > hc){
//				swap = lc;
//				lc -= hc;
//				for(int i = 0; i < n; i++){
//					if(arr[i] != 0){
//						if(arr[i] < x){
//							lc--;
//						}
//						if(lc == 0){
//							cout<<swap<<endl;
//							break;
//						}
//					}
//					if(i == n-1){
//						cout<<"-1"<<endl;
//					}
//				}
//			} else if(hc > lc) {
//				swap = hc;
//				hc -= lc;
//				for(int i = 0; i < n; i++){
//					if(arr[i] != 0){
//						if(arr[i] > x){
//							hc--;
//						}
//						if(hc == 0){
//							cout<<swap<<endl;
//							break;
//						}
//					}
//					if(i == n-1){
//						cout<<"-1"<<endl;
//					}
//				}
//			} else {
//				cout<<lc<<endl;
//			}
		}
	}
	return 0;
}
