#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main() {
	int x, y;
	cin >> x >> y;
	int cnt = 0;
	if (x < y) {
		x = x + 1;
		if (x == x) {
			cnt++;
		}
		cout << cnt << endl;
	}
	else if (x > y) {
		y = y + 2;
		if (y == y) {
			cnt++;
			y++;
		}
		cout << cnt << endl;
	}
	else {
		cout << "0" << endl;
	}

	return 0;
}