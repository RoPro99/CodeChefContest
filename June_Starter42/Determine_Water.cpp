#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main() {
	int pa, pb, qa, qb;
	int t;
	cin >> t;
	while (t--) {
		cin >> pa >> pb >> qa >> qb;
		if (pa == qb) {
			cout << "TIE" << endl;
		}

		else if (pb < qb) {
			cout << "P" << endl;
		}
		else if (pa < qa) {
			cout << "Q" << endl;
		}

	}

	return 0;
}