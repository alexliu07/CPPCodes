#include<bits/stdc++.h>
using namespace std;
int main(){
	int n, a[10],t,status=0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n; i++) {
		status = 0;
		for (int j = 0; j < n; j++) {
			if (j == 0) {
				continue;
			}
			if (a[j] > a[j - 1]) {
				status = 1;
				t = a[j];
				a[j] = a[j - 1];
				a[j - 1] = t;
			}
		}
		if (status == 1) {
			for (int j = 0; j < n; j++) {
				cout << a[j] << " ";
			}
			cout << "\n";
		}
	}
	return 0;
}