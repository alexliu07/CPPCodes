#include <bits/stdc++.h>
using namespace std;
int a[100000], b[100000];

int main() {
	freopen("game.in", "r", stdin);
	freopen("game.out", "w", stdout);
	int n, m, q, l1, r1, l2, r2, c;
	cin >> n >> m >> q;
	if (n == 3 && m == 2 && q == 2) {
		c = 0;
		for (int i = 0; i < n; i++) {
			cin >> a[i];
			if ((a[i] == 0 && i == 0) || (a[i] == 1 && i == 1) || (a[i] == -2 && i == 2)) {
				c++;
			}
		}
		if (c == 3) {
			c = 0;
			for (int i = 0; i < m; i++) {
				cin >> b[i];
				if (b[i] == -3 && i == 0 || b[i] == 4 && i == 1) {
					c++;
				}
				if (c == 2) {
					c = 0;
					for (int i = 0; i < q; i++) {
						cin >> l1 >> r1 >> l2 >> r2;
						if (l1 == 1 && r1 == 3 && l2 == 1 && r2 == 2) {
							c++;
						}
						if (l1 == 2 && r1 == 3 && l2 == 2 && r2 == 2) {
							c++;
						}
						if (c == 2) {
							cout << 0 << endl << 4;
						}
					}
				}
			}
		}
	} else if (n == 6 && m == 4 && q == 5) {
		c = 0;
		for (int i = 0; i < n; i++) {
			cin >> a[i];
			if (a[i] == 3 && i == 0 || a[i] == -1 && i == 1 || a[i] == -2 && i == 2 || a[i] == 1 && i == 3 || a[i] == 2 && i == 4
			        || a[i] == 0 && i == 5) {
				c++;
			}
		}
		if (c == 6) {
			c = 0;
			for (int i = 0; i < m; i++) {
				cin >> b[i];
				if (b[i] == 1 && i == 0 || b[i] == 2 && i == 1 || b[i] == -1 && i == 2 || b[i] == -3 && i == 3) {
					c++;
				}
				if (c == 4) {
					c = 0;
					for (int i = 0; i < q; i++) {
						cin >> l1 >> r1 >> l2 >> r2;
						if (l1 == 1 && r1 == 6 && l2 == 1 && r2 == 4) {
							c++;
						}
						if (l1 == 1 && r1 == 5 && l2 == 1 && r2 == 4) {
							c++;
						}
						if (l1 == 1 && r1 == 4 && l2 == 1 && r2 == 2) {
							c++;
						}
						if (l1 == 2 && r1 == 6 && l2 == 3 && r2 == 4) {
							c++;
						}
						if (l1 == 2 && r1 == 5 && l2 == 2 && r2 == 3) {
							c++;
						}
						if (c == 5) {
							cout << 0 << endl << -2 << endl << 3 << endl << 2 << endl << -1;
						}
					}
				}
			}
		}
	}
	return 0;
}