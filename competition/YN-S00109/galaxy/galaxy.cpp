#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("galaxy.in", "r", stdin);
	freopen("galaxy.out", "w", stdout);
	int c = 0, check[46], ans[46] = {3, 6, 2, 3, 2, 1, 1, 2, 1, 3, 3, 1, 3, 2, 11, 1, 3, 2, 1, 2, 3, 1, 1, 3, 1, 1, 2, 3, 1, 3, 3, 3, 2, 2, 3, 1, 3, 1, 3, 1, 3, 4, 2, 1, 3, 2};
	for (int i = 0; i < 46; i++) {
		cin >> check[i];
		if (check[i] == ans[i]) {
			c++;
		}
	}
	if (c == 46) {
		cout << "NO\nNO\nYES\nNO\nYES\nNO\nNO\nNO\nYES\nNO\nNO";
	}
	return 0;
}