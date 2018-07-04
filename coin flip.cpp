//============================================================================
// Name        : coin.cpp
// Author      : Shubhit Chouhan
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int t;
	scanf("%d", &t);
	while (t--) {
		int g;
		scanf("%d", &g);
		while (g--) {
			int i, n, q;
			cin >> i >> n >> q;
			int r = (n + 1) / 2;
			if (i == 1) {
				if (q != 1) {
					cout << r << endl;
				} else {
					cout << (n - r) << endl;
				}
			} else {
				if (q == 1) {
					cout << r << endl;
				} else {
					cout << (n - r) << endl;
				}
			}
		}
	}
	return 0;
}
