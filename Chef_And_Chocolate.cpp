#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main() {
	int x, y, z, result;
	int t;
	cin >> t;

	while (t--) {
		cin >> x >> y >> z;
		int result = (x * 5 + y * 10) / z;
		cout << result << endl;
	}

	return 0;
}