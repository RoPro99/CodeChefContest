#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main() {
	int t, n;
	cin >> t;
	int arr[10000];
	while (t--) {
		cin >> n;
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
		}
		int cnt = 0;
		for (int i = 0; i < n; i++) {
			if (arr[i] >= 1000) {
				cnt++;
			}
		}
		cout << cnt << endl;

	}
	return 0;
}