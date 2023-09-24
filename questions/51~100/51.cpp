#include <bits/stdc++.h>
using namespace std;
int main() {
	int n, x, tmp, count = 0;
	cin >> n >> x;
	for (int i = 1; i <= n; i++) {
		tmp = i;
		while (tmp != 0) {
			if (tmp % 10 == x) {
				count++;
			}
			tmp /= 10;
		}
	}
	cout << count;
	return 0;
}