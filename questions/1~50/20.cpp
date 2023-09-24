#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	int a[100000], min_num = 0;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	min_num = a[0];
	for (int i = 0; i < n; i++) {
		if (a[i] < min_num) {
			min_num = a[i];
		}
	}
	cout << min_num;
}