#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main() {
	int t, N, M, X, ans;
	cin >> t ;
	while (t--) {
		cin >> N >> M >> X;
		ans = (2 * N + 2 * M) * X;
		cout << ans << endl;

	}

	return 0;
}