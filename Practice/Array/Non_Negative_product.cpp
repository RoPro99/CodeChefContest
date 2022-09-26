#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main() {
	int n, t;
	cin >> t;
	int arr[1000];

	while (t--) {
		cin >> n;
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
		}
		int product = 1;
		for (int i = 0; i < n; i++) {
			product *= arr[i];
		}
		cout << product << endl;
		if (product >= 0) {
			cout << "0" << endl;
		}
		else {
			cout << "1" << endl;
		}
	}
	return 0;
}