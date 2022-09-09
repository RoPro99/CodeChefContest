#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main() {
	int t, w, x, y, z, ans, total;
	cin >> t;
	while (t--) {
		cin >> w >> x >> y >> z;
		ans = x - y;
		total = w + (ans) * z;
		cout << total << endl;
	}
	return 0;
}