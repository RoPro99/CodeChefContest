#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main() {
	int t, x, y, ans = 0;
	cin >> t;
	while (t--) {
		cin >> x >> y;
		if (x < y) {
			ans = y - x;
		}
		else {
			ans = x - y;
		}
		cout << ans << endl;
	}
	return 0;
}