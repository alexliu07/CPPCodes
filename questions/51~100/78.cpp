#include<bits/stdc++.h>
using namespace std;
int main(){
	int n, m, count;
	char mines[100][100]={};
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> mines[i][j];
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (mines[i][j] == '*') {
				cout << '*';
				continue;
			}
			count = 0;
			if (i == 0 && j == 0) {
				for (int k = i; k <= i + 1; k++) {
					for (int l = j; l <= j + 1; l++) {
						if (k == i && l == j) {
							continue;
						}
						if (mines[k][l] == '*') {
							count++;
						}
					}
				}
			}
			else if (i == 0 && j == m - 1) {
				for (int k = i; k <= i + 1; k++) {
					for (int l = j - 1; l <= j; l++) {
						if (k == i && l == j) {
							continue;
						}
						if (mines[k][l] == '*') {
							count++;
						}
					}
				}
			}
			else if (i == n - 1 && j == 0) {
				for (int k = i - 1; k <= i; k++) {
					for (int l = j; l <= j + 1; l++) {
						if (k == i && l == j) {
							continue;
						}
						if (mines[k][l] == '*') {
							count++;
						}
					}
				}
			}
			else if (i == n - 1 && j == m - 1) {
				for (int k = i - 1; k <= i; k++) {
					for (int l = j - 1; l <= j; l++) {
						if (k == i && l == j) {
							continue;
						}
						if (mines[k][l] == '*') {
							count++;
						}
					}
				}
			}
			else if (i == 0 && j != 0 && j != m - 1) {
				for (int k = i; k <= i + 1; k++) {
					for (int l = j - 1; l <= j + 1; l++) {
						if (k == i && l == j) {
							continue;
						}
						if (mines[k][l] == '*') {
							count++;
						}
					}
				}
			}
			else if (i == n - 1 && j != 0 && j != m - 1) {
				for (int k = i - 1; k <= i; k++) {
					for (int l = j - 1; l <= j + 1; l++) {
						if (k == i && l == j) {
							continue;
						}
						if (mines[k][l] == '*') {
							count++;
						}
					}
				}
			}
			else if (j == 0 && i != 0 && i != n - 1) {
				for (int k = i - 1; k <= i + 1; k++) {
					for (int l = j; l <= j + 1; l++) {
						if (k == i && l == j) {
							continue;
						}
						if (mines[k][l] == '*') {
							count++;
						}
					}
				}
			}
			else if (j == m - 1 && i != 0 && i != n - 1) {
				for (int k = i - 1; k <= i + 1; k++) {
					for (int l = j - 1; l <= j; l++) {
						if (k == i && l == j) {
							continue;
						}
						if (mines[k][l] == '*') {
							count++;
						}
					}
				}
			}
			else {
				for (int k = i - 1; k <= i + 1; k++) {
					for (int l = j - 1; l <= j + 1; l++) {
						if (k == i && l == j) {
							continue;
						}
						if (mines[k][l] == '*') {
							count++;
						}
					}
				}
			}
			cout << count;
		}
		cout << endl;
	}
	return 0;
}