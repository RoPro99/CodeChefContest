#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		int arr[n];
		for (int i = 0; i < n; ++i)
		{
			cin >> arr[i];
			if (n % 2 == 1) {
				cout << "-1" << endl;
			}
			else {
				int sum = 0;
				for (int i = 0; i < n; i++) {
					sum += arr[i];
					if (sum == 0) {
						cout << "0" << endl;
					}
					else if (sum < 0) {
						cout << abs(sum / 2) << endl;
					}
					else {
						cout << sum / 2 << endl;
					}
				}
			}
		}
	}


	return 0;
}