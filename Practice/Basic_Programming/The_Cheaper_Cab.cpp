#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main() {
	int t, x, y;
	cin >> t;
	while (t--) {
		cin >> x >> y;
		if (x < y) {
			cout << "FIRST" << endl;
		}
		else if (y < x) {
			cout << "SECOND" << endl;
		}
		else {
			cout << "ANY" << endl;
		}
	}
	return 0;
}