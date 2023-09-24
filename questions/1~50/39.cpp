#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	int a[1000], b = 0, min_index = 0;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (a[j] > a[i]) {
				b = a[i];
				a[i] = a[j];
				a[j] = b;
			}
		}
	}
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
	return 0;
}