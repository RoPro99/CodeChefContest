#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main() {
	int x, y, t;
	cin >> t;
	while (t--) {
		cin >> x >> y;
		if ((x + y) % 2 == 0) {
			cout << "Yes" << endl;
		}
		else {
			cout << "No" << endl;
		}
	}
	return 0;
}